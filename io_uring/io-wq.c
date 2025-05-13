// SPDX-License-Identifier: GPL-2.0
/*
 * Basic worker thread pool for io_uring
 *
 * Copyright (C) 2019 Jens Axboe
 *
 */
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/errno.h>
#include <linux/sched/signal.h>
#include <linux/percpu.h>
#include <linux/slab.h>
#include <linux/rculist_nulls.h>
#include <linux/cpu.h>
#include <linux/cpuset.h>
#include <linux/task_work.h>
#include <linux/audit.h>
#include <linux/mmu_context.h>
#include <uapi/linux/io_uring.h>

#include "io-wq.h"
#include "slist.h"
#include "io_uring.h"

#define WORKER_IDLE_TIMEOUT	(5 * HZ)
#define WORKER_INIT_LIMIT	3

enum {
	IO_WORKER_F_UP		= 0,	/* up and active */
	IO_WORKER_F_RUNNING	= 1,	/* account as running */
	IO_WORKER_F_FREE	= 2,	/* worker on free list */
};

enum {
	IO_WQ_BIT_EXIT		= 0,	/* wq exiting */
};

enum {
	IO_ACCT_STALLED_BIT	= 0,	/* stalled on hash */
};
/**
 * struct io_worker - Represents a single worker thread in io_uring's workqueue.
 * @ref: Reference counter for safe lifecycle management.
 * @flags: Status flags (e.g., IO_WORKER_F_FREE, IO_WORKER_F_UP).
 * @nulls_node: RCU-safe node for inclusion in the free worker hash list.
 * @all_list: List head for linking all workers under an accounting context.
 * @task: Pointer to the task_struct representing this kernel thread.
 * @wq: Pointer to the parent io_wq structure.
 * @acct: Pointer to the accounting context this worker belongs to (bound/unbound).
 * @cur_work: Currently executing io_wq_work pointer, if any.
 * @lock: Spinlock to protect access to cur_work and other per-worker state.
 * @ref_done: Completion used for synchronization on refcount drop.
 * @create_state: Bitfield to track the worker creation progress.
 * @create_work: Callback used for deferred worker creation.
 * @init_retries: Count of how many times worker creation has been retried.
 * @rcu/work: Union used for RCU callback or delayed work retry, depending on context.
 *
 * This structure encapsulates the full state of a single io-wq worker. It tracks
 * its reference count, execution state, and association with a workqueue and
 * accounting context. The kernel uses this structure to schedule, manage, and clean up
 * io_uring workqueue threads efficiently.
 */
struct io_worker {
	refcount_t ref;
	unsigned long flags;
	struct hlist_nulls_node nulls_node;
	struct list_head all_list;
	struct task_struct *task;
	struct io_wq *wq;
	struct io_wq_acct *acct;

	struct io_wq_work *cur_work;
	raw_spinlock_t lock;

	struct completion ref_done;

	unsigned long create_state;
	struct callback_head create_work;
	int init_retries;

	union {
		struct rcu_head rcu;
		struct delayed_work work;
	};
};

#if BITS_PER_LONG == 64
#define IO_WQ_HASH_ORDER	6
#else
#define IO_WQ_HASH_ORDER	5
#endif

#define IO_WQ_NR_HASH_BUCKETS	(1u << IO_WQ_HASH_ORDER)
/**
 * struct io_wq_acct - Accounting context for io_uring workers.
 * @workers_lock: Spinlock protecting access to the worker lists.
 * @nr_workers: Current number of workers in this accounting context.
 * @max_workers: Maximum allowed workers in this context.
 * @nr_running: Number of currently running workers (atomic).
 * @free_list: RCU-protected list of idle/free workers.
 * @all_list: RCU-protected list of all workers (active and idle).
 * @lock: Spinlock protecting the work_list and related state.
 * @work_list: The list of pending work items assigned to this context.
 * @flags: Bitmap for state tracking (e.g., IO_ACCT_STALLED_BIT).
 *
 * This structure manages a specific class of workers in io-wq, such as
 * bounded or unbounded workers. It ensures thread-safe access to worker
 * lists and scheduling of pending work items.
 */
struct io_wq_acct {
	/**
	 * Protects access to the worker lists.
	 */
	raw_spinlock_t workers_lock;

	unsigned nr_workers;
	unsigned max_workers;
	atomic_t nr_running;

	/**
	 * The list of free workers.  Protected by #workers_lock
	 * (write) and RCU (read).
	 */
	struct hlist_nulls_head free_list;

	/**
	 * The list of all workers.  Protected by #workers_lock
	 * (write) and RCU (read).
	 */
	struct list_head all_list;

	raw_spinlock_t lock;
	struct io_wq_work_list work_list;
	unsigned long flags;
};

/**
 * enum io_wq_acct_types - Types of io_wq worker accounting classes.
 * @IO_WQ_ACCT_BOUND: Accounting for bounded workers, limited in number and CPU affinity.
 * @IO_WQ_ACCT_UNBOUND: Accounting for unbounded workers, more flexible and not tied to CPU constraints.
 * @IO_WQ_ACCT_NR: Total number of accounting types (must always be the last).
 *
 * This enumeration distinguishes between worker types for scheduling and resource limits.
 */
enum {
	IO_WQ_ACCT_BOUND,
	IO_WQ_ACCT_UNBOUND,
	IO_WQ_ACCT_NR,
};

/**
 * struct io_wq - Main structure for io_uring worker queue (io-wq).
 * @state: Bitfield representing the current state of the worker queue (e.g., exit flags).
 * @free_work: Callback function to free work items after completion.
 * @do_work: Callback function to execute the actual work.
 * @hash: Pointer to the hash table for serialized work items.
 * @worker_refs: Reference counter tracking active workers.
 * @worker_done: Completion used for waiting on all workers to exit.
 * @cpuhp_node: CPU hotplug node used to manage CPU online/offline state.
 * @task: Task struct representing the owning process or context.
 * @acct: Array of worker accounting contexts (bounded and unbounded).
 * @wait: Wait queue entry used for sleeping when no work is available or when stalled.
 * @hash_tail: Array of pointers to the last work per hash bucket (used for hash-serialized work).
 * @cpu_mask: CPU affinity mask specifying which CPUs workers can run on.
 *
 * This structure represents the central workqueue for io_uring. It manages worker lifecycle,
 * scheduling, CPU affinity, hash-based serialization, and provides hooks for executing and
 * cleaning up async work.
 */
struct io_wq {
	unsigned long state;

	free_work_fn *free_work;
	io_wq_work_fn *do_work;

	struct io_wq_hash *hash;

	atomic_t worker_refs;
	struct completion worker_done;

	struct hlist_node cpuhp_node;

	struct task_struct *task;

	struct io_wq_acct acct[IO_WQ_ACCT_NR];

	struct wait_queue_entry wait;

	struct io_wq_work *hash_tail[IO_WQ_NR_HASH_BUCKETS];

	cpumask_var_t cpu_mask;
};

/**
 * static enum cpuhp_state io_wq_online - CPU hotplug state for io-wq.
 *
 * This variable tracks the CPU hotplug state registration for io-wq,
 * allowing it to handle CPU online/offline transitions cleanly.
 */
static enum cpuhp_state io_wq_online;

/**
 * struct io_cb_cancel_data - Context for cancelling submitted io_uring requests.
 * @fn: Callback function used to match a work item for cancellation.
 * @data: Opaque pointer passed to the match function.
 * @nr_running: Number of currently running work items matched and marked for cancellation.
 * @nr_pending: Number of pending work items matched and removed.
 * @cancel_all: If true, attempt to cancel all matching requests instead of stopping after the first match.
 *
 * This structure is used when attempting to cancel pending or running io_wq work items,
 * based on the criteria defined by the provided match function.
 */
struct io_cb_cancel_data {
	work_cancel_fn *fn;
	void *data;
	int nr_running;
	int nr_pending;
	bool cancel_all;
};

static bool create_io_worker(struct io_wq *wq, struct io_wq_acct *acct);
static void io_wq_dec_running(struct io_worker *worker);
static bool io_acct_cancel_pending_work(struct io_wq *wq,
					struct io_wq_acct *acct,
					struct io_cb_cancel_data *match);
static void create_worker_cb(struct callback_head *cb);
static void io_wq_cancel_tw_create(struct io_wq *wq);

/*
 * io_worker_get - TODO: Describe what this function does.
 * @param struct io_worker *worker
 * @return TODO: Return value description.
 */
static bool io_worker_get(struct io_worker *worker)
{
	return refcount_inc_not_zero(&worker->ref);
}

/**
 * io_worker_release - Decrease the reference count of an io_worker.
 * @worker: Pointer to the io_worker structure.
 *
 * Decrements the reference count of the specified worker. If the reference
 * count reaches zero, signals completion via the associated @ref_done
 * completion object, allowing waiting threads to proceed or clean up the worker.
 */
static void io_worker_release(struct io_worker *worker)
{
	if (refcount_dec_and_test(&worker->ref))
		complete(&worker->ref_done);
}

/**
 * io_get_acct - Retrieve the accounting context (bound or unbound) from an io_wq.
 * @wq: Pointer to the io_wq structure.
 * @bound: Boolean flag indicating whether to get the bound (true) or unbound (false) context.
 *
 * Returns a pointer to the corresponding io_wq_acct structure based on the @bound flag.
 */
static inline struct io_wq_acct *io_get_acct(struct io_wq *wq, bool bound)
{
	return &wq->acct[bound ? IO_WQ_ACCT_BOUND : IO_WQ_ACCT_UNBOUND];
}

/**
 * io_work_get_acct - Determine the accounting context for a given work item.
 * @wq: Pointer to the io_wq structure.
 * @work_flags: Flags associated with the work item.
 *
 * Returns the appropriate accounting context (bound or unbound) depending
 * on whether the work is marked as unbound via IO_WQ_WORK_UNBOUND.
 */
static inline struct io_wq_acct *io_work_get_acct(struct io_wq *wq,
						  unsigned int work_flags)
{
	return io_get_acct(wq, !(work_flags & IO_WQ_WORK_UNBOUND));
}

/**
 * io_wq_get_acct - Get the accounting context associated with a worker.
 * @worker: Pointer to the io_worker structure.
 *
 * Returns the pointer to the io_wq_acct structure assigned to this worker.
 */
static inline struct io_wq_acct *io_wq_get_acct(struct io_worker *worker)
{
	return worker->acct;
}

/**
 * io_worker_ref_put - Decrease the global worker reference count.
 * @wq: Pointer to the io_wq instance.
 *
 * If the reference count reaches zero, signals that all workers are done
 * by completing the associated worker_done completion.
 */
static void io_worker_ref_put(struct io_wq *wq)
{
	if (atomic_dec_and_test(&wq->worker_refs))
		complete(&wq->worker_done);
}

/**
 * io_wq_worker_stopped - Check if the current io_worker should stop.
 *
 * Returns true if the current task is an io_worker and its io_wq instance
 * is flagged for exit. If the current task is not an io_worker, a warning is
 * triggered and true is returned.
 *
 * Return: true if the worker should stop, false otherwise.
 */
bool io_wq_worker_stopped(void)
{
	struct io_worker *worker = current->worker_private;

	if (WARN_ON_ONCE(!io_wq_current_is_worker()))
		return true;

	return test_bit(IO_WQ_BIT_EXIT, &worker->wq->state);
}

/**
 * io_worker_cancel_cb - Cancel a pending worker setup.
 * @worker: Pointer to the io_worker being canceled.
 *
 * This function is called when a worker that was being created needs to be
 * canceled. It updates the accounting for running and total workers,
 * clears the create state bit, decrements the global reference count,
 * and releases the worker.
 */
static void io_worker_cancel_cb(struct io_worker *worker)
{
	struct io_wq_acct *acct = io_wq_get_acct(worker);
	struct io_wq *wq = worker->wq;
	atomic_dec(&acct->nr_running);
	raw_spin_lock(&acct->workers_lock);
	acct->nr_workers--;
	raw_spin_unlock(&acct->workers_lock);
	io_worker_ref_put(wq);
	clear_bit_unlock(0, &worker->create_state);
	io_worker_release(worker);
}

/**
 * io_task_worker_match - Match a task_work callback with a specific worker.
 * @cb: Pointer to the callback_head structure.
 * @data: Pointer to the io_worker to match against.
 *
 * Returns true if the callback corresponds to `create_worker_cb` and is
 * associated with the given worker instance, false otherwise. This is
 * typically used for canceling pending task_work.
 */
static bool io_task_worker_match(struct callback_head *cb, void *data)
{
	struct io_worker *worker;
	if (cb->func != create_worker_cb)
		return false;
	worker = container_of(cb, struct io_worker, create_work);
	return worker == data;
}

/**
 * io_worker_exit - Cleanly exit and free a worker thread.
 * @worker: Pointer to the io_worker structure.
 *
 * Cancels any pending task_work creation callbacks for the given worker,
 * waits for all references to be dropped, and removes the worker from
 * the accounting structures. It then marks the thread as done and exits
 * the task cleanly. Ensures all resources associated with the worker are
 * properly released and that it's removed from the scheduler.
 */
static void io_worker_exit(struct io_worker *worker)
{
	struct io_wq *wq = worker->wq;
	struct io_wq_acct *acct = io_wq_get_acct(worker);

	while (1) {
		struct callback_head *cb = task_work_cancel_match(wq->task,
						io_task_worker_match, worker);

		if (!cb)
			break;
		io_worker_cancel_cb(worker);
	}

	io_worker_release(worker);
	wait_for_completion(&worker->ref_done);

	raw_spin_lock(&acct->workers_lock);
	if (test_bit(IO_WORKER_F_FREE, &worker->flags))
		hlist_nulls_del_rcu(&worker->nulls_node);
	list_del_rcu(&worker->all_list);
	raw_spin_unlock(&acct->workers_lock);
	io_wq_dec_running(worker);
	
	current->worker_private = NULL;

	kfree_rcu(worker, rcu);
	io_worker_ref_put(wq);
	do_exit(0);
}

/**
 * __io_acct_run_queue - Check if there is work ready to be processed.
 * @acct: Pointer to the io_wq_acct structure.
 *
 * Returns true if the accounting context is not stalled and the work list
 * is not empty, indicating that work is available to be run.
 *
 * Return: true if work is pending and not stalled, false otherwise.
 */
static inline bool __io_acct_run_queue(struct io_wq_acct *acct)
{
	return !test_bit(IO_ACCT_STALLED_BIT, &acct->flags) &&
		!wq_list_empty(&acct->work_list);
}

/**
 * io_acct_run_queue - Try to acquire lock and check for runnable work items.
 * @acct: Pointer to the io_wq_acct structure.
 *
 * Attempts to acquire the lock protecting the work queue and checks if there is
 * any non-stalled work pending. If no runnable work is found, the lock is released.
 *
 * Return: true if runnable work is found and the lock is held;
 *         false otherwise (lock is released).
 */
static inline bool io_acct_run_queue(struct io_wq_acct *acct)
	__acquires(&acct->lock)
{
	raw_spin_lock(&acct->lock);
	if (__io_acct_run_queue(acct))
		return true;

	raw_spin_unlock(&acct->lock);
	return false;
}

/**
 * io_acct_activate_free_worker - Wake up a free worker if one is available.
 * @acct: Pointer to the io_wq_acct structure.
 *
 * Iterates through the list of free workers protected by RCU. If a usable
 * worker is found, attempts to increment its reference count, wake it up, and
 * release the reference.
 *
 * This function must be called while holding the RCU read lock.
 *
 * Return: true if a worker was successfully activated, false otherwise.
 */
static bool io_acct_activate_free_worker(struct io_wq_acct *acct)
	__must_hold(RCU)
{
	struct hlist_nulls_node *n;
	struct io_worker *worker;
	
	hlist_nulls_for_each_entry_rcu(worker, n, &acct->free_list, nulls_node) {
		if (!io_worker_get(worker))
			continue;
		
		wake_up_process(worker->task);
		io_worker_release(worker);
		return true;
	}
	
	return false;
}

/**
 * io_wq_create_worker - Attempt to create a new io_uring worker thread.
 * @wq: Pointer to the io_wq instance.
 * @acct: Pointer to the io_wq_acct structure (bounded or unbounded context).
 *
 * This function checks if the number of existing workers is below the allowed
 * maximum. If so, it increments the counters and initiates the creation of a
 * new worker thread via `create_io_worker()`. If the maximum has been reached,
 * it returns true to indicate that no more workers should be created.
 *
 * Return: true on success or if no new worker was created due to limits,
 * false if worker creation failed.
 */
static bool io_wq_create_worker(struct io_wq *wq, struct io_wq_acct *acct)
{
	if (unlikely(!acct->max_workers))
		pr_warn_once("io-wq is not configured for unbound workers");

	raw_spin_lock(&acct->workers_lock);
	if (acct->nr_workers >= acct->max_workers) {

		raw_spin_unlock(&acct->workers_lock);
		return true;
	}
	acct->nr_workers++;
	raw_spin_unlock(&acct->workers_lock);
	atomic_inc(&acct->nr_running);

	atomic_inc(&wq->worker_refs);
	return create_io_worker(wq, acct);
}

/**
 * io_wq_inc_running - Increment the number of currently running workers.
 * @worker: Pointer to the current io_worker.
 *
 * This function increases the `nr_running` counter in the accounting
 * context (`io_wq_acct`) associated with the given worker. It is used
 * to track how many workers are actively processing tasks.
 */
static void io_wq_inc_running(struct io_worker *worker)
{
	struct io_wq_acct *acct = io_wq_get_acct(worker);

	atomic_inc(&acct->nr_running);
}

/**
 * create_worker_cb - Task work callback to attempt creating a new worker thread.
 * @cb: Pointer to the callback_head structure embedded in the io_worker.
 *
 * This function is triggered as a task_work callback to try creating a new worker
 * if the current number of workers is below the maximum allowed. If successful,
 * a new worker is created via `create_io_worker()`. Otherwise, the running count
 * is decremented and the reference to the io_wq is released.
 */
static void create_worker_cb(struct callback_head *cb)
{
	struct io_worker *worker;
	struct io_wq *wq;

	struct io_wq_acct *acct;
	bool do_create = false;

	worker = container_of(cb, struct io_worker, create_work);
	wq = worker->wq;
	acct = worker->acct;
	raw_spin_lock(&acct->workers_lock);

	if (acct->nr_workers < acct->max_workers) {
		acct->nr_workers++;
		do_create = true;
	}
	raw_spin_unlock(&acct->workers_lock);
	if (do_create) {
		create_io_worker(wq, acct);
	} else {
		atomic_dec(&acct->nr_running);
		io_worker_ref_put(wq);
	}
	clear_bit_unlock(0, &worker->create_state);
	io_worker_release(worker);
}

/**
 * io_queue_worker_create - Schedule creation of a new worker thread via task work.
 * @worker: Pointer to the io_worker to create.
 * @acct: Pointer to the accounting structure associated with the worker.
 * @func: Task work function to execute for creating the worker.
 *
 * This function schedules a worker creation task to be executed in the context of
 * the io_wq's task. It ensures proper synchronization via a creation state bit,
 * manages reference counts, and avoids scheduling if io_wq is in the process of exiting.
 *
 * Return: true if the task was successfully queued, false otherwise.
static bool io_queue_worker_create(struct io_worker *worker,
				   struct io_wq_acct *acct,
				   task_work_func_t func)
{
	struct io_wq *wq = worker->wq;

	/* raced with exit, just ignore create call */
	if (test_bit(IO_WQ_BIT_EXIT, &wq->state))
		goto fail;
	if (!io_worker_get(worker))
		goto fail;
	
	if (test_bit(0, &worker->create_state) ||
	    test_and_set_bit_lock(0, &worker->create_state))
		goto fail_release;

	atomic_inc(&wq->worker_refs);
	init_task_work(&worker->create_work, func);
	if (!task_work_add(wq->task, &worker->create_work, TWA_SIGNAL)) {
		
		if (test_bit(IO_WQ_BIT_EXIT, &wq->state))
			io_wq_cancel_tw_create(wq);

		io_worker_ref_put(wq);
		return true;
	}
	io_worker_ref_put(wq);
	clear_bit_unlock(0, &worker->create_state);
fail_release:
	io_worker_release(worker);
fail:
	atomic_dec(&acct->nr_running);
	io_worker_ref_put(wq);
	return false;
}

/**
 * io_wq_dec_running - Decrease the number of running workers for the given account.
 * @worker: Pointer to the io_worker structure whose running count should be decreased.
 *
 * This function decrements the running worker count for the worker's associated
 * accounting group. If the count drops to zero and there is still work queued,
 * it triggers the creation of a new worker to ensure continued processing.
 */
static void io_wq_dec_running(struct io_worker *worker)
{
	struct io_wq_acct *acct = io_wq_get_acct(worker);
	struct io_wq *wq = worker->wq;

	if (!test_bit(IO_WORKER_F_UP, &worker->flags))
		return;

	if (!atomic_dec_and_test(&acct->nr_running))
		return;

	if (!io_acct_run_queue(acct))
		return;

	raw_spin_unlock(&acct->lock);
	atomic_inc(&acct->nr_running);
	atomic_inc(&wq->worker_refs);
	io_queue_worker_create(worker, acct, create_worker_cb);
}

/**
 * __io_worker_busy - Mark a worker as busy and remove it from the free list.
 * @acct: Pointer to the worker's accounting group.
 * @worker: Pointer to the io_worker being marked as busy.
 *
 * If the worker is currently marked as free, this function clears the free flag,
 * removes the worker from the free list, and ensures it is no longer available
 * for immediate reuse. This operation is protected by the workers_lock.
 */
static void __io_worker_busy(struct io_wq_acct *acct, struct io_worker *worker)
{
	if (test_bit(IO_WORKER_F_FREE, &worker->flags)) {
		clear_bit(IO_WORKER_F_FREE, &worker->flags);
		raw_spin_lock(&acct->workers_lock);
		hlist_nulls_del_init_rcu(&worker->nulls_node);
		raw_spin_unlock(&acct->workers_lock);

	}
}

/**
 * __io_worker_idle - Mark a worker as idle and add it to the free list.
 * @acct: Pointer to the io_wq_acct structure managing the worker group.
 * @worker: Pointer to the io_worker to be marked as idle.
 *
 * This function sets the worker's free flag and inserts it into the accounting
 * group’s free_list, making it available for future task assignment.
 * Must be called while holding acct->workers_lock.
 */
static void __io_worker_idle(struct io_wq_acct *acct, struct io_worker *worker)
	__must_hold(acct->workers_lock)
{

	if (!test_bit(IO_WORKER_F_FREE, &worker->flags)) {
		set_bit(IO_WORKER_F_FREE, &worker->flags);
		hlist_nulls_add_head_rcu(&worker->nulls_node, &acct->free_list);
	}
}

/**
 * __io_get_work_hash - Extract the hash index from a work's flags.
 * @work_flags: Work flags containing encoded hash information.
 *
 * Returns the hash index by shifting the work_flags using IO_WQ_HASH_SHIFT.
 * This index is used to ensure serialized execution of work items that hash
 * to the same value (e.g., writes to the same inode).
 *
 * Return: Hash bucket index derived from work flags.
 */
static inline unsigned int __io_get_work_hash(unsigned int work_flags)
{
	return work_flags >> IO_WQ_HASH_SHIFT;
}

/**
 * io_get_work_hash - Retrieve the hash index from a work item.
 * @work: Pointer to the io_wq_work structure.
 *
 * Atomically reads the work's flags and extracts the hash index using
 * __io_get_work_hash(). This is used to determine which hash bucket
 * the work belongs to, allowing hashed work items to be serialized.
 *
 * Return: Hash bucket index for the given work item.
 */
static inline unsigned int io_get_work_hash(struct io_wq_work *work)
{
	return __io_get_work_hash(atomic_read(&work->flags));
}

/**
 * io_wait_on_hash - Wait for a specific hash bucket to become free.
 * @wq: Pointer to the io_wq structure.
 * @hash: Hash bucket index to wait on.
 *
 * This function checks if the given hash bucket is currently busy.
 * If it's free, the caller can proceed. Otherwise, the wait entry is
 * added to the wait queue. The function ensures proper locking and
 * wakeup handling for serialized hashed work.
 *
 * Return: true if the hash bucket is free, false otherwise.
 */
static bool io_wait_on_hash(struct io_wq *wq, unsigned int hash)
{
	bool ret = false;

	spin_lock_irq(&wq->hash->wait.lock);
	if (list_empty(&wq->wait.entry)) {
		__add_wait_queue(&wq->hash->wait, &wq->wait);
		if (!test_bit(hash, &wq->hash->map)) {
			__set_current_state(TASK_RUNNING);
			list_del_init(&wq->wait.entry);
			ret = true;
		}
	}
	spin_unlock_irq(&wq->hash->wait.lock);
	return ret;
}

/**
 * io_get_next_work - Fetch the next work item from the accounting queue.
 * @acct: Pointer to the accounting structure (bounded/unbounded).
 * @wq: Pointer to the io_wq instance.
 *
 * This function retrieves the next available work item from the accounting
 * queue. It prioritizes un-hashed work that can run immediately. For hashed
 * work (serialized execution), it ensures that only one item per hash is
 * active at a time. If all eligible work is blocked on a hash, it waits on
 * the corresponding hash slot.
 *
 * Return: Pointer to the next io_wq_work to execute, or NULL if none is available.
 */
static struct io_wq_work *io_get_next_work(struct io_wq_acct *acct,
					   struct io_wq *wq)
	__must_hold(acct->lock)
{
	struct io_wq_work_node *node, *prev;
	struct io_wq_work *work, *tail;
	unsigned int stall_hash = -1U;

	wq_list_for_each(node, prev, &acct->work_list) {
		unsigned int work_flags;
		unsigned int hash;

		work = container_of(node, struct io_wq_work, list);

		/* not hashed, can run anytime */
		work_flags = atomic_read(&work->flags);
		if (!__io_wq_is_hashed(work_flags)) {
			wq_list_del(&acct->work_list, node, prev);
			return work;
		}

		hash = __io_get_work_hash(work_flags);
		/* all items with this hash lie in [work, tail] */
		tail = wq->hash_tail[hash];

		/* hashed, can run if not already running */
		if (!test_and_set_bit(hash, &wq->hash->map)) {
			wq->hash_tail[hash] = NULL;
			wq_list_cut(&acct->work_list, &tail->list, prev);
			return work;
		}
		if (stall_hash == -1U)
			stall_hash = hash;
		/* fast forward to a next hash, for-each will fix up @prev */
		node = &tail->list;
	}

	if (stall_hash != -1U) {
		bool unstalled;

		/*
		 * Set this before dropping the lock to avoid racing with new
		 * work being added and clearing the stalled bit.
		 */
		set_bit(IO_ACCT_STALLED_BIT, &acct->flags);
		raw_spin_unlock(&acct->lock);
		unstalled = io_wait_on_hash(wq, stall_hash);
		raw_spin_lock(&acct->lock);
		if (unstalled) {
			clear_bit(IO_ACCT_STALLED_BIT, &acct->flags);
			if (wq_has_sleeper(&wq->hash->wait))
				wake_up(&wq->hash->wait);
		}
	}

	return NULL;
}

/**
 * io_assign_current_work - Set or clear the current work for a worker.
 * @worker: The io_worker that will execute the work.
 * @work: The work item to assign, or NULL to clear.
 *
 * If a work item is provided, this function runs any pending task_work
 * and yields the CPU if needed before updating the worker's current work
 * pointer. Access to the pointer is protected by a spinlock to prevent
 * concurrent updates.
 */
static void io_assign_current_work(struct io_worker *worker,
				   struct io_wq_work *work)
{
	if (work) {
		io_run_task_work();
		cond_resched();
	}

	raw_spin_lock(&worker->lock);
	worker->cur_work = work;
	raw_spin_unlock(&worker->lock);
}

/**
 * io_worker_handle_work - Main loop for processing work items by a worker.
 * @acct: Pointer to the accounting structure (io_wq_acct) for the worker.
 * @worker: Pointer to the worker executing the work.
 *
 * This function is responsible for fetching and executing queued work items
 * from the accounting structure. It supports processing linked work items and
 * ensures proper handling of hashed work (serialized execution by hash).
 * 
 * The function also responds to global shutdown state (`IO_WQ_BIT_EXIT`)
 * and sets cancellation flags for unbound work if shutdown is in progress.
 * 
 * Releases @acct->lock at the end of execution.
 */
static void io_worker_handle_work(struct io_wq_acct *acct,
				  struct io_worker *worker)
	__releases(&acct->lock)
{
	struct io_wq *wq = worker->wq;
	bool do_kill = test_bit(IO_WQ_BIT_EXIT, &wq->state);

	do {
		struct io_wq_work *work;

		work = io_get_next_work(acct, wq);
		if (work) {
			raw_spin_lock(&worker->lock);
			worker->cur_work = work;
			raw_spin_unlock(&worker->lock);
		}

		raw_spin_unlock(&acct->lock);

		if (!work)
			break;

		__io_worker_busy(acct, worker);

		io_assign_current_work(worker, work);
		__set_current_state(TASK_RUNNING);

		/* handle a whole dependent link */
		do {
			struct io_wq_work *next_hashed, *linked;
			unsigned int work_flags = atomic_read(&work->flags);
			unsigned int hash = __io_wq_is_hashed(work_flags)
				? __io_get_work_hash(work_flags)
				: -1U;

			next_hashed = wq_next_work(work);

			if (do_kill &&
			    (work_flags & IO_WQ_WORK_UNBOUND))
				atomic_or(IO_WQ_WORK_CANCEL, &work->flags);
			wq->do_work(work);
			io_assign_current_work(worker, NULL);

			linked = wq->free_work(work);
			work = next_hashed;
			if (!work && linked && !io_wq_is_hashed(linked)) {
				work = linked;
				linked = NULL;
			}
			io_assign_current_work(worker, work);
			if (linked)
				io_wq_enqueue(wq, linked);

			if (hash != -1U && !next_hashed) {
				/* serialize hash clear with wake_up() */
				spin_lock_irq(&wq->hash->wait.lock);
				clear_bit(hash, &wq->hash->map);
				clear_bit(IO_ACCT_STALLED_BIT, &acct->flags);
				spin_unlock_irq(&wq->hash->wait.lock);
				if (wq_has_sleeper(&wq->hash->wait))
					wake_up(&wq->hash->wait);
			}
		} while (work);

		if (!__io_acct_run_queue(acct))
			break;
		raw_spin_lock(&acct->lock);
	} while (1);
}

/**
 * io_wq_worker - Main execution loop for a worker thread in io_uring.
 * @data: Pointer to the io_worker structure.
 *
 * This function serves as the entry point for io_uring worker threads.
 * It repeatedly checks for pending work in the worker's accounting context
 * and executes it. If there is no work, it idles with a timeout and may
 * eventually exit based on conditions such as CPU affinity or pool shrinkage.
 *
 * The function also handles thread naming, signal checks, and exit cleanup.
 *
 * Return: Always returns 0 on thread termination.
 */
static int io_wq_worker(void *data)
{
	struct io_worker *worker = data;
	struct io_wq_acct *acct = io_wq_get_acct(worker);
	struct io_wq *wq = worker->wq;
	bool exit_mask = false, last_timeout = false;
	char buf[TASK_COMM_LEN] = {};

	set_mask_bits(&worker->flags, 0,
		      BIT(IO_WORKER_F_UP) | BIT(IO_WORKER_F_RUNNING));

	snprintf(buf, sizeof(buf), "iou-wrk-%d", wq->task->pid);
	set_task_comm(current, buf);

	while (!test_bit(IO_WQ_BIT_EXIT, &wq->state)) {
		long ret;

		set_current_state(TASK_INTERRUPTIBLE);

		/*
		 * If we have work to do, io_acct_run_queue() returns with
		 * the acct->lock held. If not, it will drop it.
		 */
		while (io_acct_run_queue(acct))
			io_worker_handle_work(acct, worker);

		raw_spin_lock(&acct->workers_lock);
		/*
		 * Last sleep timed out. Exit if we're not the last worker,
		 * or if someone modified our affinity.
		 */
		if (last_timeout && (exit_mask || acct->nr_workers > 1)) {
			acct->nr_workers--;
			raw_spin_unlock(&acct->workers_lock);
			__set_current_state(TASK_RUNNING);
			break;
		}
		last_timeout = false;
		__io_worker_idle(acct, worker);
		raw_spin_unlock(&acct->workers_lock);
		if (io_run_task_work())
			continue;
		ret = schedule_timeout(WORKER_IDLE_TIMEOUT);
		if (signal_pending(current)) {
			struct ksignal ksig;

			if (!get_signal(&ksig))
				continue;
			break;
		}
	if (!ret) {
			last_timeout = true;
			exit_mask = !cpumask_test_cpu(raw_smp_processor_id(),
							wq->cpu_mask);
		}
	}

	if (test_bit(IO_WQ_BIT_EXIT, &wq->state) && io_acct_run_queue(acct))
		io_worker_handle_work(acct, worker);

	io_worker_exit(worker);
	return 0;
}

/**
 * io_wq_worker_running - Mark the worker as currently running.
 * @tsk: Pointer to the task_struct representing the worker thread.
 *
 * This function is used to mark an io_worker as running if it has been
 * initialized and is currently active. It ensures that the running flag
 * is only set once and increments the running worker count accordingly.
 */
void io_wq_worker_running(struct task_struct *tsk)
{
	struct io_worker *worker = tsk->worker_private;

	if (!worker)
		return;
	if (!test_bit(IO_WORKER_F_UP, &worker->flags))
		return;
	if (test_bit(IO_WORKER_F_RUNNING, &worker->flags))
		return;
	set_bit(IO_WORKER_F_RUNNING, &worker->flags);
	io_wq_inc_running(worker);
}

/**
 * io_wq_worker_sleeping - Mark the worker as going to sleep.
 * @tsk: Pointer to the task_struct of the worker thread.
 *
 * Clears the running flag for the io_worker and decrements the count
 * of currently running workers in its accounting context. This function
 * should be called when the worker is transitioning to a sleep state,
 * ensuring accurate tracking of active workers.
 */
void io_wq_worker_sleeping(struct task_struct *tsk)
{
	struct io_worker *worker = tsk->worker_private;

	if (!worker)
		return;
	if (!test_bit(IO_WORKER_F_UP, &worker->flags))
		return;
	if (!test_bit(IO_WORKER_F_RUNNING, &worker->flags))
		return;

	clear_bit(IO_WORKER_F_RUNNING, &worker->flags);
	io_wq_dec_running(worker);
}

/**
 * io_init_new_worker - Initialize a newly created io_uring worker thread.
 * @wq: Pointer to the io_wq instance the worker belongs to.
 * @acct: Pointer to the io_wq_acct structure managing the worker.
 * @worker: Pointer to the io_worker structure being initialized.
 * @tsk: The task_struct representing the new worker thread.
 *
 * Sets up the worker's CPU affinity, inserts it into the free and all
 * worker lists under proper locking, marks it as free, and wakes up the thread.
 */
static void io_init_new_worker(struct io_wq *wq, struct io_wq_acct *acct, struct io_worker *worker,
			       struct task_struct *tsk)
{
	tsk->worker_private = worker;
	worker->task = tsk;
	set_cpus_allowed_ptr(tsk, wq->cpu_mask);

	raw_spin_lock(&acct->workers_lock);
	hlist_nulls_add_head_rcu(&worker->nulls_node, &acct->free_list);
	list_add_tail_rcu(&worker->all_list, &acct->all_list);
	set_bit(IO_WORKER_F_FREE, &worker->flags);
	raw_spin_unlock(&acct->workers_lock);
	wake_up_new_task(tsk);
}

/**
 * io_wq_work_match_all - Match any io_wq_work item.
 * @work: Pointer to the io_wq_work being evaluated.
 * @data: Unused, can be NULL.
 *
 * This function is a generic matcher that unconditionally returns true,
 * indicating that any work item matches. It is typically used in cancellation
 * logic when all work items should be selected regardless of their content.
 *
 * Return: Always true.
 */
static bool io_wq_work_match_all(struct io_wq_work *work, void *data)
{
	return true;
}

/**
 * io_should_retry_thread - Determine whether worker thread creation should be retried.
 * @worker: The worker structure attempting initialization.
 * @err: Error code returned from a previous attempt.
 *
 * This function decides whether a failed worker thread creation should be
 * retried. Retries are limited by a maximum count (`WORKER_INIT_LIMIT`)
 * and skipped entirely if a fatal signal is pending in the current task.
 * Retryable errors include `-EAGAIN`, `-ERESTARTSYS`, `-ERESTARTNOINTR`,
 * and `-ERESTARTNOHAND`.
 *
 * Return: true if the creation should be retried, false otherwise.
 */
static inline bool io_should_retry_thread(struct io_worker *worker, long err)
{
	/*
	 * Prevent perpetual task_work retry, if the task (or its group) is
	 * exiting.
	 */
	if (fatal_signal_pending(current))
		return false;
	if (worker->init_retries++ >= WORKER_INIT_LIMIT)
		return false;

	switch (err) {
	case -EAGAIN:
	case -ERESTARTSYS:
	case -ERESTARTNOINTR:
	case -ERESTARTNOHAND:
		return true;
	default:
		return false;
	}
}

/**
 * queue_create_worker_retry - Retry scheduling of failed worker creation.
 * @worker: The io_worker structure for which creation is being retried.
 *
 * This function schedules a delayed retry for creating a worker thread
 * after a failure. The delay increases with each retry attempt, using
 * `init_retries * 5` milliseconds, converted into jiffies. This helps
 * avoid aggressive retry loops and gives time for conditions to improve.
 */
static void queue_create_worker_retry(struct io_worker *worker)
{
	schedule_delayed_work(&worker->work,
			      msecs_to_jiffies(worker->init_retries * 5));
}

/**
 * create_worker_cont - Continuation function to initialize a new io_worker.
 * @cb: Pointer to the callback_head embedded in the io_worker.
 *
 * This function is executed in task_work context to finalize creation of a new
 * worker thread. It attempts to create a new kernel thread using
 * `create_io_thread()` for the given worker. If the thread is successfully
 * created, the worker is initialized and added to the worker lists.
 *
 * If thread creation fails and retries are not advisable (e.g., due to fatal
 * signals or retry limit), it decreases the running and total worker counts,
 * cancels pending work (if this was the last worker), releases resources, and
 * frees the worker.
 *
 * If retry is possible, the function schedules a retry via delayed work.
 */
static void create_worker_cont(struct callback_head *cb)
{
	struct io_worker *worker;
	struct task_struct *tsk;
	struct io_wq *wq;
	struct io_wq_acct *acct;

	worker = container_of(cb, struct io_worker, create_work);
	clear_bit_unlock(0, &worker->create_state);
	wq = worker->wq;
	acct = io_wq_get_acct(worker);
	tsk = create_io_thread(io_wq_worker, worker, NUMA_NO_NODE);
	if (!IS_ERR(tsk)) {
		io_init_new_worker(wq, acct, worker, tsk);
		io_worker_release(worker);
		return;
	} else if (!io_should_retry_thread(worker, PTR_ERR(tsk))) {
		atomic_dec(&acct->nr_running);

		raw_spin_lock(&acct->workers_lock);
		acct->nr_workers--;
		if (!acct->nr_workers) {
			struct io_cb_cancel_data match = {
				.fn		= io_wq_work_match_all,
				.cancel_all	= true,
			};

			raw_spin_unlock(&acct->workers_lock);
		while (io_acct_cancel_pending_work(wq, acct, &match))
				;
		} else {
			raw_spin_unlock(&acct->workers_lock);
		}
		io_worker_ref_put(wq);
		kfree(worker);
		return;
	}

	/* re-create attempts grab a new worker ref, drop the existing one */
	io_worker_release(worker);
	queue_create_worker_retry(worker);
}

/**
 * io_workqueue_create - Schedules creation of a new io_worker thread.
 * @work: Pointer to the work_struct embedded in the io_worker.
 *
 * This function is triggered by delayed work (e.g. from a retry attempt)
 * and attempts to queue a worker creation via task_work. If successful,
 * the worker will be initialized and started. If the creation fails
 * (e.g. due to the io_wq being in exit state), the worker is freed.
 */
static void io_workqueue_create(struct work_struct *work)
{
	struct io_worker *worker = container_of(work, struct io_worker,
						work.work);
	struct io_wq_acct *acct = io_wq_get_acct(worker);

	if (!io_queue_worker_create(worker, acct, create_worker_cont))
		kfree(worker);
}

/**
 * create_io_worker - Create and start a new io_uring worker thread.
 * @wq: Pointer to the io_wq structure that owns the worker.
 * @acct: Pointer to the accounting structure associated with the worker type.
 *
 * Allocates and initializes a new io_worker, then attempts to create a
 * corresponding kernel thread via `create_io_thread()`. If the thread
 * creation fails, it may schedule a retry if the error is transient and
 * within retry limits. On fatal errors, cleans up and returns false.
 *
 * Returns: true on success or retry scheduled, false on failure.
 */
static bool create_io_worker(struct io_wq *wq, struct io_wq_acct *acct)
{
	struct io_worker *worker;
	struct task_struct *tsk;

	__set_current_state(TASK_RUNNING);

	worker = kzalloc(sizeof(*worker), GFP_KERNEL);
	if (!worker) {
fail:
		atomic_dec(&acct->nr_running);
		raw_spin_lock(&acct->workers_lock);
		acct->nr_workers--;
		raw_spin_unlock(&acct->workers_lock);
		io_worker_ref_put(wq);
		return false;
	}

	refcount_set(&worker->ref, 1);
	worker->wq = wq;
	worker->acct = acct;
	raw_spin_lock_init(&worker->lock);
	init_completion(&worker->ref_done);

	tsk = create_io_thread(io_wq_worker, worker, NUMA_NO_NODE);
	if (!IS_ERR(tsk)) {
		io_init_new_worker(wq, acct, worker, tsk);
	} else if (!io_should_retry_thread(worker, PTR_ERR(tsk))) {
		kfree(worker);
		goto fail;
	} else {
		INIT_DELAYED_WORK(&worker->work, io_workqueue_create);
		queue_create_worker_retry(worker);
	}

	return true;
}

/**
 * io_acct_for_each_worker - Iterate over all workers in an io_wq_acct context.
 * @acct: Pointer to the io_wq_acct structure containing the workers.
 * @func: Callback function to invoke for each worker.
 * @data: User-defined data passed to the callback function.
 *
 * Traverses the list of all workers in the specified accounting group (`acct`)
 * and invokes the provided callback function (`func`) on each worker that has
 * an associated task. If the callback returns true for any worker, the loop is
 * aborted early and the function returns true.
 *
 * Returns: true if the callback returned true for any worker, false otherwise.
 */
static bool io_acct_for_each_worker(struct io_wq_acct *acct,
				    bool (*func)(struct io_worker *, void *),
				    void *data)
{
	struct io_worker *worker;
	bool ret = false;

	list_for_each_entry_rcu(worker, &acct->all_list, all_list) {
		if (io_worker_get(worker)) {
			/* no task if node is/was offline */
			if (worker->task)
				ret = func(worker, data);
			io_worker_release(worker);

			if (ret)
				break;
		}
	}

	return ret;
}

/**
 * io_wq_for_each_worker - Apply a callback to each worker in an io_wq instance.
 * @wq: Pointer to the io_wq structure.
 * @func: Callback function to execute for each worker.
 * @data: Pointer to user-defined data passed to the callback.
 *
 * Iterates over all workers in both the bounded and unbounded accounting groups
 * of the given io_wq instance. For each worker, the specified callback function
 * is invoked. If the callback returns false for any group, iteration stops.
 *
 * Returns: true if all accounting groups were fully processed, false otherwise.
 */
static bool io_wq_for_each_worker(struct io_wq *wq,
				  bool (*func)(struct io_worker *, void *),
				  void *data)
{
	for (int i = 0; i < IO_WQ_ACCT_NR; i++) {
		if (!io_acct_for_each_worker(&wq->acct[i], func, data))
			return false;
	}

	return true;
}

/**
 * io_wq_worker_wake - Wake up a specified io_worker task.
 * @worker: Pointer to the io_worker to be woken.
 * @data: Unused (can be NULL).
 *
 * Sends a signal to notify the worker task and wakes it up if it's sleeping.
 * This is typically used to resume execution of workers during shutdown or
 * work rescheduling.
 *
 * Return: Always returns false to continue iteration when used in a walker.
 */
static bool io_wq_worker_wake(struct io_worker *worker, void *data)
{
	__set_notify_signal(worker->task);
	wake_up_process(worker->task);
	return false;
}

/**
 * io_run_cancel - Execute and clean up a canceled work item chain.
 * @work: Pointer to the io_wq_work that should be marked as canceled.
 * @wq: Pointer to the io_wq context associated with the work.
 *
 * This function marks the given work item (and any linked work items)
 * as canceled by setting the `IO_WQ_WORK_CANCEL` flag. It then invokes
 * the associated `do_work` handler and continues to free any remaining
 * linked work using the `free_work` callback.
 */
static void io_run_cancel(struct io_wq_work *work, struct io_wq *wq)
{
	do {
		atomic_or(IO_WQ_WORK_CANCEL, &work->flags);
		wq->do_work(work);
	work = wq->free_work(work);
	} while (work);
}

/**
 * io_wq_insert_work - Insert a new work item into the appropriate work list.
 * @wq: Pointer to the io_wq instance.
 * @acct: Accounting context (bounded or unbounded) where the work belongs.
 * @work: Pointer to the work item to be inserted.
 * @work_flags: Flags associated with the work item (may indicate hashed work).
 *
 * If the work is not hashed, it's simply appended to the tail of the work list.
 * If the work is hashed, it is inserted after the previous tail for the same
 * hash bucket to ensure proper serialization of hashed work items.
 */
static void io_wq_insert_work(struct io_wq *wq, struct io_wq_acct *acct,
			      struct io_wq_work *work, unsigned int work_flags)
{
	unsigned int hash;
	struct io_wq_work *tail;

	if (!__io_wq_is_hashed(work_flags)) {
append:
		wq_list_add_tail(&work->list, &acct->work_list);
		return;
	}

	hash = __io_get_work_hash(work_flags);
	tail = wq->hash_tail[hash];
	wq->hash_tail[hash] = work;
	if (!tail)
		goto append;

	wq_list_add_after(&work->list, &tail->list, &acct->work_list);
}

/**
 * io_wq_work_match_item - Match a work item against a target.
 * @work: Pointer to the current work item.
 * @data: Pointer to the target work item for comparison.
 *
 * Returns true if the current work item matches the target work item
 * provided in @data. Typically used as a callback for canceling or
 * identifying specific work items in the workqueue.
 */
static bool io_wq_work_match_item(struct io_wq_work *work, void *data)
{
	return work == data;
}

/**
 * io_wq_enqueue - Enqueue a work item into the io_wq subsystem.
 * @wq: Pointer to the io_wq structure.
 * @work: Pointer to the io_wq_work to be enqueued.
 *
 * This function inserts a work item into the appropriate accounting queue
 * (bounded or unbounded), based on its flags. It checks whether the
 * work item is marked for cancellation or if the workqueue is exiting,
 * and cancels it immediately if so.
 *
 * If no idle worker is available to handle the work, a new worker is
 * created, provided concurrency conditions allow it. In cases where
 * no worker exists and none can be created, the work is canceled.
 */
void io_wq_enqueue(struct io_wq *wq, struct io_wq_work *work)
{
	unsigned int work_flags = atomic_read(&work->flags);
	struct io_wq_acct *acct = io_work_get_acct(wq, work_flags);
	struct io_cb_cancel_data match = {
		.fn		= io_wq_work_match_item,
		.data		= work,
		.cancel_all	= false,
	};
	bool do_create;

	if (test_bit(IO_WQ_BIT_EXIT, &wq->state) ||
	    (work_flags & IO_WQ_WORK_CANCEL)) {
		io_run_cancel(work, wq);
		return;
	}

	raw_spin_lock(&acct->lock);
	io_wq_insert_work(wq, acct, work, work_flags);
	clear_bit(IO_ACCT_STALLED_BIT, &acct->flags);

	raw_spin_unlock(&acct->lock);

	rcu_read_lock();
	do_create = !io_acct_activate_free_worker(acct);
	rcu_read_unlock();

	if (do_create && ((work_flags & IO_WQ_WORK_CONCURRENT) ||
	    !atomic_read(&acct->nr_running))) {
		bool did_create;

		did_create = io_wq_create_worker(wq, acct);
		if (likely(did_create))
			return;

		raw_spin_lock(&acct->workers_lock);
		if (acct->nr_workers) {
			raw_spin_unlock(&acct->workers_lock);
			return;
		}
		raw_spin_unlock(&acct->workers_lock);

		/* fatal condition, failed to create the first worker */
		io_acct_cancel_pending_work(wq, acct, &match);
	}
}

/**
 * io_wq_hash_work - Mark a work item as hashed based on a pointer value.
 * @work: Pointer to the io_wq_work structure.
 * @val: Pointer value used to generate the hash.
 *
 * This function computes a hash from the given pointer and encodes it
 * into the work item's flags. It also marks the work as hashed, which
 * enables hash-based serialization to ensure that only one work item
 * per hash runs at a time.
 */
void io_wq_hash_work(struct io_wq_work *work, void *val)
{
	unsigned int bit;

	bit = hash_ptr(val, IO_WQ_HASH_ORDER);
	atomic_or(IO_WQ_WORK_HASHED | (bit << IO_WQ_HASH_SHIFT), &work->flags);
}

/**
 * __io_wq_worker_cancel - Attempt to cancel a work item running on a worker.
 * @worker: Pointer to the io_worker structure currently processing work.
 * @match: Pointer to cancellation match criteria (callback and data).
 * @work: The current work item being processed.
 *
 * This function checks if the current work item matches the cancellation
 * criteria. If it does, it marks the work as canceled and notifies the
 * worker thread. Returns true if the work item was marked for cancellation,
 * false otherwise.
 */
static bool __io_wq_worker_cancel(struct io_worker *worker,
				  struct io_cb_cancel_data *match,
				  struct io_wq_work *work)
{
	if (work && match->fn(work, match->data)) {
		atomic_or(IO_WQ_WORK_CANCEL, &work->flags);
		__set_notify_signal(worker->task);
		return true;
	}

	return false;
}

/**
 * io_wq_worker_cancel - Attempt to cancel a running work item on a worker.
 * @worker: The io_worker currently executing a task.
 * @data: Pointer to io_cb_cancel_data containing cancellation criteria.
 *
 * This function locks the worker and checks whether its current work item
 * matches the cancellation criteria. If a match is found, it marks the work
 * as canceled and signals the worker. It increments the counter of running
 * cancellations and returns true if a matching item was canceled and not all
 * cancellations are requested.
 *
 * Return: true if a match was found and not all items need canceling,
 *         false otherwise.
 */
static bool io_wq_worker_cancel(struct io_worker *worker, void *data)
{
	struct io_cb_cancel_data *match = data;
	
	raw_spin_lock(&worker->lock);
	if (__io_wq_worker_cancel(worker, match, worker->cur_work))
		match->nr_running++;
	raw_spin_unlock(&worker->lock);

	return match->nr_running && !match->cancel_all;
}

static inline void io_wq_remove_pending(struct io_wq *wq,
					struct io_wq_acct *acct,
					 struct io_wq_work *work,
					 struct io_wq_work_node *prev)
{
	unsigned int hash = io_get_work_hash(work);
	struct io_wq_work *prev_work = NULL;

	if (io_wq_is_hashed(work) && work == wq->hash_tail[hash]) {
		if (prev)
			prev_work = container_of(prev, struct io_wq_work, list);
		if (prev_work && io_get_work_hash(prev_work) == hash)
			wq->hash_tail[hash] = prev_work;
		else
			wq->hash_tail[hash] = NULL;
	}
	wq_list_del(&acct->work_list, &work->list, prev);
}

/**
 * io_wq_remove_pending - Remove a work item from the pending queue.
 * @wq: Pointer to the io_wq instance.
 * @acct: Pointer to the associated accounting context.
 * @work: The work item to remove.
 * @prev: The previous node in the work list, or NULL if @work is the first item.
 *
 * If the work item is hashed and is currently the tail of the corresponding hash
 * bucket, the function updates the hash tail pointer. Then, it removes the work
 * from the accounting queue list.
 */
static bool io_acct_cancel_pending_work(struct io_wq *wq,
					struct io_wq_acct *acct,
					struct io_cb_cancel_data *match)

	struct io_wq_work_node *node, *prev;
	struct io_wq_work *work;

	raw_spin_lock(&acct->lock);
	wq_list_for_each(node, prev, &acct->work_list) {
		work = container_of(node, struct io_wq_work, list);

		if (!match->fn(work, match->data))
			continue;
		io_wq_remove_pending(wq, acct, work, prev);
		raw_spin_unlock(&acct->lock);
		io_run_cancel(work, wq);
		match->nr_pending++;
		/* not safe to continue after unlock */
		return true;
	}
	raw_spin_unlock(&acct->lock);

	return false;
}

/**
 * io_wq_cancel_pending_work - Attempts to cancel pending work in all accounting queues.
 * @wq: Pointer to the io_wq instance.
 * @match: Pointer to the cancellation match criteria structure.
 *
 * Iterates over both bounded and unbounded worker queues to find and cancel
 * pending work that matches the given criteria. If `cancel_all` is set in
 * @match, it retries until no more matching work is found. Uses io_acct_cancel_pending_work()
 * for the actual cancellation logic within each accounting group.
 */
static void io_wq_cancel_pending_work(struct io_wq *wq,
				      struct io_cb_cancel_data *match)
{
	int i;
retry:
	for (i = 0; i < IO_WQ_ACCT_NR; i++) {
		struct io_wq_acct *acct = io_get_acct(wq, i == 0);

		if (io_acct_cancel_pending_work(wq, acct, match)) {
			if (match->cancel_all)
				goto retry;
			break;
		}
	}
}

/**
 * io_acct_cancel_running_work - Attempt to cancel running work in a specific account group.
 * @acct: Pointer to the io_wq_acct structure representing a worker group.
 * @match: Pointer to the cancellation match criteria.
 *
 * Acquires the worker lock for the account group and traverses all currently
 * active workers to match and cancel any work items based on the criteria
 * defined in @match. The cancellation is performed via io_wq_worker_cancel().
 */
static void io_acct_cancel_running_work(struct io_wq_acct *acct,
					struct io_cb_cancel_data *match)
{
	raw_spin_lock(&acct->workers_lock);
	io_acct_for_each_worker(acct, io_wq_worker_cancel, match);
	raw_spin_unlock(&acct->workers_lock);
}

/**
 * io_wq_cancel_running_work - Attempt to cancel running work across all worker groups.
 * @wq: Pointer to the io_wq instance.
 * @match: Pointer to the cancellation match data.
 *
 * Iterates over all worker account groups in the io_wq and invokes
 * cancellation logic for currently running tasks that match the given
 * criteria. Uses RCU read-side protection during traversal.
 */
static void io_wq_cancel_running_work(struct io_wq *wq,
				       struct io_cb_cancel_data *match)
{
	rcu_read_lock();

	for (int i = 0; i < IO_WQ_ACCT_NR; i++)
		io_acct_cancel_running_work(&wq->acct[i], match);
	
	rcu_read_unlock();
}

/**
 * io_wq_cancel_cb - Cancel pending or running work items in io-wq.
 * @wq: Pointer to the io_wq instance.
 * @cancel: Callback function to match the target work.
 * @data: Data passed to the match function.
 * @cancel_all: If true, continue canceling all matching work items.
 *
 * This function attempts to cancel work items in two phases:
 * 1. It first looks for matching *pending* work and cancels it.
 * 2. If none found or `cancel_all` is set, it attempts to cancel
 *    *running* work items by signaling the corresponding workers.
 *
 * Return: One of the io_wq_cancel enum values:
 *   - IO_WQ_CANCEL_OK: Pending work was successfully canceled.
 *   - IO_WQ_CANCEL_RUNNING: Matching work is currently executing.
 *   - IO_WQ_CANCEL_NOTFOUND: No matching work found.
 */
enum io_wq_cancel io_wq_cancel_cb(struct io_wq *wq, work_cancel_fn *cancel,
				  void *data, bool cancel_all)
{
	struct io_cb_cancel_data match = {
		.fn		= cancel,
		.data		= data,
		.cancel_all	= cancel_all,
	};

	io_wq_cancel_pending_work(wq, &match);
	if (match.nr_pending && !match.cancel_all)
		return IO_WQ_CANCEL_OK;

	io_wq_cancel_running_work(wq, &match);
	if (match.nr_running && !match.cancel_all)
		return IO_WQ_CANCEL_RUNNING;

	if (match.nr_running)
		return IO_WQ_CANCEL_RUNNING;
	if (match.nr_pending)
		return IO_WQ_CANCEL_OK;
	return IO_WQ_CANCEL_NOTFOUND;
}

/**
 * io_wq_hash_wake - Wake callback for hash-based work wakeup.
 * @wait: Pointer to the wait queue entry.
 * @mode: Wake mode (unused).
 * @sync: Sync flag (unused).
 * @key: Wake key (unused).
 *
 * Called when a previously stalled work hash becomes available. This function
 * removes the wait entry from the queue and attempts to activate any stalled
 * workers for each accounting context (bounded and unbounded).
 *
 * Return: Always returns 1 to indicate the wait condition has been handled.
 */
static int io_wq_hash_wake(struct wait_queue_entry *wait, unsigned mode,
			    int sync, void *key)
{
	struct io_wq *wq = container_of(wait, struct io_wq, wait);
	int i;

	list_del_init(&wait->entry);

	rcu_read_lock();
	for (i = 0; i < IO_WQ_ACCT_NR; i++) {
		struct io_wq_acct *acct = &wq->acct[i];

		if (test_and_clear_bit(IO_ACCT_STALLED_BIT, &acct->flags))
			io_acct_activate_free_worker(acct);
	}
	rcu_read_unlock();
	return 1;
}

/**
 * io_wq_create - Allocate and initialize a new io_uring workqueue.
 * @bounded: Maximum number of bounded workers allowed.
 * @data: Pointer to the io_wq_data structure providing init context.
 *
 * This function sets up a new io_wq instance, initializing accounting
 * contexts (bounded and unbounded), hash table reference, worker management
 * structures, CPU affinity mask, and the CPU hotplug node.
 *
 * Return: Pointer to the newly created io_wq on success, or an error pointer
 * on failure (e.g., -ENOMEM or -EINVAL).
 */
struct io_wq *io_wq_create(unsigned bounded, struct io_wq_data *data)
{
	int ret, i;
	struct io_wq *wq;

	if (WARN_ON_ONCE(!data->free_work || !data->do_work))
		return ERR_PTR(-EINVAL);
	if (WARN_ON_ONCE(!bounded))
		return ERR_PTR(-EINVAL);

	wq = kzalloc(sizeof(struct io_wq), GFP_KERNEL);
	if (!wq)
		return ERR_PTR(-ENOMEM);

	refcount_inc(&data->hash->refs);
	wq->hash = data->hash;
	wq->free_work = data->free_work;
	wq->do_work = data->do_work;

	ret = -ENOMEM;

	if (!alloc_cpumask_var(&wq->cpu_mask, GFP_KERNEL))
		goto err;
	cpuset_cpus_allowed(data->task, wq->cpu_mask);
	wq->acct[IO_WQ_ACCT_BOUND].max_workers = bounded;
	wq->acct[IO_WQ_ACCT_UNBOUND].max_workers =
				task_rlimit(current, RLIMIT_NPROC);
	INIT_LIST_HEAD(&wq->wait.entry);
	wq->wait.func = io_wq_hash_wake;

	for (i = 0; i < IO_WQ_ACCT_NR; i++) {
		struct io_wq_acct *acct = &wq->acct[i];

		atomic_set(&acct->nr_running, 0);

		raw_spin_lock_init(&acct->workers_lock);
		INIT_HLIST_NULLS_HEAD(&acct->free_list, 0);
		INIT_LIST_HEAD(&acct->all_list);

		INIT_WQ_LIST(&acct->work_list);
		raw_spin_lock_init(&acct->lock);
	}

	wq->task = get_task_struct(data->task);
	atomic_set(&wq->worker_refs, 1);
	init_completion(&wq->worker_done);
	ret = cpuhp_state_add_instance_nocalls(io_wq_online, &wq->cpuhp_node);

	if (ret)
		goto err;

	return wq;
err:
	io_wq_put_hash(data->hash);
	free_cpumask_var(wq->cpu_mask);
	kfree(wq);
	return ERR_PTR(ret);
}

/**
 * io_task_work_match - Callback matcher for task_work items related to worker creation.
 * @cb: Pointer to the callback_head structure representing task_work.
 * @data: Pointer to the io_wq instance being matched.
 *
 * Returns true if the task_work callback is either a worker creation callback
 * (`create_worker_cb` or `create_worker_cont`) and is associated with the same
 * io_wq instance as `data`.
 *
 * Return: true if the task_work matches the given io_wq, false otherwise.
 */
static bool io_task_work_match(struct callback_head *cb, void *data)
{
	struct io_worker *worker;

	if (cb->func != create_worker_cb && cb->func != create_worker_cont)
		return false;
	worker = container_of(cb, struct io_worker, create_work);
	return worker->wq == data;
}

/**
 * io_wq_exit_start - Initiate shutdown sequence for an io_wq instance.
 * @wq: Pointer to the io_wq workqueue instance.
 *
 * Sets the internal exit flag to signal that the workqueue is being shut down.
 * This flag causes workers to begin exiting and prevents creation of new ones.
 */
void io_wq_exit_start(struct io_wq *wq)
{
	set_bit(IO_WQ_BIT_EXIT, &wq->state);
}

static void io_wq_cancel_tw_create(struct io_wq *wq)
{
	struct callback_head *cb;

	while ((cb = task_work_cancel_match(wq->task, io_task_work_match, wq)) != NULL) {
		struct io_worker *worker;

		worker = container_of(cb, struct io_worker, create_work);
		io_worker_cancel_cb(worker);
		/*
		 * Only the worker continuation helper has worker allocated and
		 * hence needs freeing.
		 */
		if (cb->func == create_worker_cont)
			kfree(worker);
	}
}

/**
 * io_wq_exit_workers - Gracefully shuts down all active workers in an io_wq instance.
 * @wq: Pointer to the io_wq structure.
 *
 * Cancels any pending task_work for worker creation, wakes up all running workers,
 * and waits for their completion. Removes the wait queue entry from the hash wait list,
 * and releases the reference to the task_struct associated with the io_wq.
 * This function is part of the shutdown sequence of the io_wq subsystem.
 */
static void io_wq_exit_workers(struct io_wq *wq)
{
	if (!wq->task)
		return;

	io_wq_cancel_tw_create(wq);

	rcu_read_lock();
	io_wq_for_each_worker(wq, io_wq_worker_wake, NULL);
	rcu_read_unlock();
	io_worker_ref_put(wq);

	wait_for_completion(&wq->worker_done);

	spin_lock_irq(&wq->hash->wait.lock);
	list_del_init(&wq->wait.entry);
	spin_unlock_irq(&wq->hash->wait.lock);

	put_task_struct(wq->task);
	wq->task = NULL;
}

/**
 * io_wq_destroy - Clean up and deallocate an io_wq instance.
 * @wq: Pointer to the io_wq structure to be destroyed.
 *
 * This function performs the final teardown of an io_wq instance. It removes
 * the CPU hotplug state instance, cancels all remaining pending work,
 * releases the allocated CPU mask, drops the reference to the hash table,
 * and frees the memory associated with the io_wq structure.
 *
 * This should be called after all workers have exited.
 */
static void io_wq_destroy(struct io_wq *wq)
{
	struct io_cb_cancel_data match = {
		.fn		= io_wq_work_match_all,
		.cancel_all	= true,
	};

	cpuhp_state_remove_instance_nocalls(io_wq_online, &wq->cpuhp_node);
	io_wq_cancel_pending_work(wq, &match);
	free_cpumask_var(wq->cpu_mask);
	io_wq_put_hash(wq->hash);
	kfree(wq);
}

/**
 * io_wq_put_and_exit - Gracefully shut down and destroy an io_wq instance.
 * @wq: Pointer to the io_wq structure.
 *
 * Ensures that the io_wq is marked for exit, then proceeds to stop all
 * associated worker threads and deallocate resources. It first calls
 * io_wq_exit_workers() to wake and wait for all workers to exit, then
 * calls io_wq_destroy() to release memory and internal structures.
 *
 * Must only be called after setting IO_WQ_BIT_EXIT.
 */
void io_wq_put_and_exit(struct io_wq *wq)
{
	WARN_ON_ONCE(!test_bit(IO_WQ_BIT_EXIT, &wq->state));

	io_wq_exit_workers(wq);
	io_wq_destroy(wq);
}

/**
 * struct online_data - Helper structure for CPU hotplug events.
 * @cpu: The target CPU affected by the event.
 * @online: Indicates whether the CPU is coming online (true) or going offline (false).
 *
 * This structure is used when updating worker CPU affinity in response to
 * CPU online/offline events in io_wq. It is passed to worker iteration
 * callbacks to adjust their CPU masks accordingly.
 */
struct online_data {
	unsigned int cpu;
	bool online;
};

/**
 * io_wq_worker_affinity - Update the CPU mask of a worker based on CPU hotplug event.
 * @worker: Pointer to the io_worker structure to update.
 * @data: Pointer to an online_data structure indicating the CPU and its online status.
 *
 * This function is used during CPU hotplug events to modify the CPU affinity
 * mask of io_wq workers. If the specified CPU is coming online, it is added
 * to the worker's allowed CPU mask. If it's going offline, the CPU is removed
 * from the mask. Always returns false to allow continued iteration.
 *
 * Return: false (always), to continue iterating through workers.
 */
static bool io_wq_worker_affinity(struct io_worker *worker, void *data)
{
	struct online_data *od = data;

	if (od->online)
		cpumask_set_cpu(od->cpu, worker->wq->cpu_mask);
	else
		cpumask_clear_cpu(od->cpu, worker->wq->cpu_mask);
	return false;
}

/**
 * __io_wq_cpu_online - Update CPU affinity for all workers on CPU online/offline event.
 * @wq: Pointer to the io_wq instance whose workers will be updated.
 * @cpu: The CPU ID being brought online or taken offline.
 * @online: Boolean indicating whether the CPU is online (true) or offline (false).
 *
 * This function iterates over all io_wq workers and updates their CPU mask to
 * either include or exclude the specified CPU depending on the online status.
 * It ensures safe access using RCU protection during iteration.
 *
 * Return: Always returns 0.
 */
static int __io_wq_cpu_online(struct io_wq *wq, unsigned int cpu, bool online)
{
	struct online_data od = {
		.cpu = cpu,
		.online = online
	};
	rcu_read_lock();
	io_wq_for_each_worker(wq, io_wq_worker_affinity, &od);
	rcu_read_unlock();
	return 0;
}

/**
 * io_wq_cpu_online - CPU hotplug callback for bringing a CPU online.
 * @cpu: The CPU identifier being brought online.
 * @node: Pointer to the hlist_node embedded in the io_wq structure.
 *
 * This function is called when a CPU is brought online. It updates the CPU
 * affinity of all workers associated with the given io_wq instance so they
 * can utilize the newly online CPU.
 *
 * Return: Always returns 0.
 */
static int io_wq_cpu_online(unsigned int cpu, struct hlist_node *node)
{
	struct io_wq *wq = hlist_entry_safe(node, struct io_wq, cpuhp_node);

	return __io_wq_cpu_online(wq, cpu, true);
}

/**
 * io_wq_cpu_offline - CPU hotplug callback for taking a CPU offline.
 * @cpu: The CPU identifier being taken offline.
 * @node: Pointer to the hlist_node embedded in the io_wq structure.
 *
 * This function is called when a CPU goes offline. It updates the CPU
 * affinity mask for all workers associated with the given io_wq instance
 * to remove the offline CPU from their allowed set.
 *
 * Return: Always returns 0.
 */
static int io_wq_cpu_offline(unsigned int cpu, struct hlist_node *node)
{
	struct io_wq *wq = hlist_entry_safe(node, struct io_wq, cpuhp_node);

	return __io_wq_cpu_online(wq, cpu, false);
}

/**
 * io_wq_cpu_affinity - Set or retrieve CPU affinity for an io_wq instance.
 * @tctx: Pointer to the io_uring_task structure containing the io_wq.
 * @mask: Optional cpumask specifying desired CPUs; NULL to reset to allowed set.
 *
 * If @mask is provided, it must be a subset of the task's allowed CPUs,
 * otherwise -EINVAL is returned. If @mask is NULL, the CPU mask is reset
 * to the current allowed CPUs of the io_wq task.
 *
 * Return: 0 on success, -EINVAL if the mask is invalid, -ENOMEM on allocation failure.
 */
int io_wq_cpu_affinity(struct io_uring_task *tctx, cpumask_var_t mask)
{
	cpumask_var_t allowed_mask;
	int ret = 0;

	if (!tctx || !tctx->io_wq)
		return -EINVAL;

	if (!alloc_cpumask_var(&allowed_mask, GFP_KERNEL))
		return -ENOMEM;

	rcu_read_lock();
	cpuset_cpus_allowed(tctx->io_wq->task, allowed_mask);
	if (mask) {

		if (cpumask_subset(mask, allowed_mask))
			cpumask_copy(tctx->io_wq->cpu_mask, mask);
		else
			ret = -EINVAL;
	} else {
		cpumask_copy(tctx->io_wq->cpu_mask, allowed_mask);
	}
	rcu_read_unlock();

	free_cpumask_var(allowed_mask);
	return ret;
}

/**
 * io_wq_max_workers - Set or retrieve the maximum number of workers per account.
 * @wq: Pointer to the io_wq structure.
 * @new_count: Array of size IO_WQ_ACCT_NR. Contains new max values as input and returns old values as output.
 *
 * If any new_count entry is zero, the corresponding max value is not updated. Otherwise, the new maximum
 * is set but clamped to the RLIMIT_NPROC of the current task. The old max values are returned in-place
 * through the same array.
 *
 * Return: 0 on success.
 */
int io_wq_max_workers(struct io_wq *wq, int *new_count)
{
	struct io_wq_acct *acct;
	int prev[IO_WQ_ACCT_NR];
	int i;

	BUILD_BUG_ON((int) IO_WQ_ACCT_BOUND   != (int) IO_WQ_BOUND);
	BUILD_BUG_ON((int) IO_WQ_ACCT_UNBOUND != (int) IO_WQ_UNBOUND);
	BUILD_BUG_ON((int) IO_WQ_ACCT_NR      != 2);

	for (i = 0; i < IO_WQ_ACCT_NR; i++) {
		if (new_count[i] > task_rlimit(current, RLIMIT_NPROC))
			new_count[i] = task_rlimit(current, RLIMIT_NPROC);
	}

	for (i = 0; i < IO_WQ_ACCT_NR; i++)
		prev[i] = 0;

	rcu_read_lock();

	for (i = 0; i < IO_WQ_ACCT_NR; i++) {
		acct = &wq->acct[i];
		raw_spin_lock(&acct->workers_lock);
		prev[i] = max_t(int, acct->max_workers, prev[i]);
		if (new_count[i])
			acct->max_workers = new_count[i];
		raw_spin_unlock(&acct->workers_lock);
	}
	rcu_read_unlock();

	for (i = 0; i < IO_WQ_ACCT_NR; i++)
		new_count[i] = prev[i];

	return 0;
}

/**
 * io_wq_max_workers - Set or retrieve the maximum number of workers per account.
 * @wq: Pointer to the io_wq structure.
 * @new_count: Array of size IO_WQ_ACCT_NR. Contains new max values as input and returns old values as output.
 *
 * If any new_count entry is zero, the corresponding max value is not updated. Otherwise, the new maximum
 * is set but clamped to the RLIMIT_NPROC of the current task. The old max values are returned in-place
 * through the same array.
 *
 * Return: 0 on success.
 */
static __init int io_wq_init(void)
{
	int ret;

	ret = cpuhp_setup_state_multi(CPUHP_AP_ONLINE_DYN, "io-wq/online",
					io_wq_cpu_online, io_wq_cpu_offline);
	if (ret < 0)
		return ret;
	io_wq_online = ret;
	return 0;
}
subsys_initcall(io_wq_init);

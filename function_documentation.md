# Task 4: Documenting function
For the final part of the assignment, you won't fill any info in this readme. But put any explanation on each function definition on all sources of io_uring subdirectory. For the given example you can check epoll.c, on function io_epoll_ctl. 

##  io_uring/advise.c
 * io_madvise_prep - Prepare a madvise SQE (I/O memory advice) request.
 * @req: The io_kiocb structure holding the request.
 * @cmd: The sqe data parsed from userspace.
 *
 * Validates the user-passed parameters and stores them into the request.
 */
static int io_madvise_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe)

 * io_madvise - Executes a madvise operation on a memory range.
 * @req: io_kiocb containing prepared request data.
 * @issue_flags: Flags related to SQE issue.
 *
 * Performs madvise on user-provided memory address range using do_madvise().
 */
static int io_madvise(struct io_kiocb *req, unsigned int issue_flags)

**
 * io_fadvise_prep - Prepare an fadvise SQE (file I/O advice) request.
 * @req: io_kiocb request structure.
 * @sqe: Submission queue entry provided from userspace.
 *
 * Validates and prepares an SQE that requests fadvise, filling out internal
 * fields like file descriptor, offset, length, and advice type.
 */
static int io_fadvise_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe)

/**
 * io_fadvise_force_async - Force asynchronous execution for certain fadvise scenarios.
 * @req: io_kiocb for the request.
 *
 * Determines whether an fadvise request must be performed asynchronously.
 */
static bool io_fadvise_force_async(struct io_kiocb *req)

/**
 * io_fadvise - Performs a file advice operation (like posix_fadvise).
 * @req: io_kiocb with prepared request.

## alloc_cache.c
/**
 * io_alloc_cache_init - Initialize a per-task allocation cache.
 * @ac: Pointer to the allocation cache object.
 *
 * Sets up the internal state of the allocation cache, including bitmap and stack head.
 */
void io_alloc_cache_init(struct io_alloc_cache *ac)

/**
 * io_alloc_cache_free - Release all memory held in the cache.
 * @ac: Pointer to the allocation cache object.
 * @size: Size of each object in the cache.
 *
 * Frees all cached entries and resets the cache structure.
 */
void io_alloc_cache_free(struct io_alloc_cache *ac, unsigned size)

/**
 * io_cache_alloc_new - Allocate a new object using kmalloc.
 * @size: Size of the object to allocate.
 * @node: NUMA node to allocate from.
 *
 * Fallback allocation function if the cache is empty.
 */
void *io_cache_alloc_new(size_t size, int node)

 * @issue_flags: Flags passed during SQE issue phase.
 *
 * Calls vfs_fadvise() to inform the kernel about expected I/O patterns.
 */
static int io_fadvise(struct io_kiocb *req, unsigned int issue_flags)

## cancel.c
/**
 * io_async_cancel_prep - Prepare an asynchronous cancel request.
 * @req: The io_kiocb representing the request.
 * @sqe: The submission queue entry from userspace.
 *
 * Extracts and validates cancel parameters for asynchronous cancellation.
 */
static int io_async_cancel_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe)

/**
 * io_async_cancel - Issue an asynchronous cancel request.
 * @req: Prepared cancel request.
 * @issue_flags: Submission issue context flags.
 *
 * Triggers cancellation of another request that matches criteria from @req.
 */
static int io_async_cancel(struct io_kiocb *req, unsigned int issue_flags)

/**
 * io_async_cancel_one - Perform the actual cancellation logic.
 * @req: The request being canceled.
 * @seq: Sequence ID to match.
 * @flags: Cancel match flags.
 *
 * Core logic that finds and cancels the matching in-flight request.
 */
static int io_async_cancel_one(struct io_ring_ctx *ctx, u64 user_data, unsigned seq, int flags)

/**
 * io_sync_cancel - Perform synchronous cancellation.
 * @ctx: io_uring context.
 * @sqe: Submission entry specifying the cancel request.
 *
 * Synchronously searches and cancels a matching request.
 */
static int io_sync_cancel(struct io_ring_ctx *ctx, const struct io_uring_sqe *sqe)

/**
 * io_cancel_cb - Cancel callback handler for request cleanup.
 * @work: The task work structure.
 *
 * Cancels a pending request via task_work mechanism.
 */
static void io_cancel_cb(struct callback_head *work)

/**
 * io_cancel_remove - Helper to remove request during synchronous cancel.
 * @req: The request being removed.
 *
 * Marks the request as canceled and handles cleanup.
 */
static void io_cancel_remove(struct io_kiocb *req)

## epoll.c
/**
 * io_epoll_ctl_prep - Prepare an epoll_ctl submission.
 * @req: The io_kiocb containing the request.
 * @sqe: The io_uring submission queue entry.
 *
 * Validates and parses the epoll_ctl arguments from the user.
 */
static int io_epoll_ctl_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe)

/**
 * io_epoll_ctl - Execute epoll_ctl on the requested epoll file descriptor.
 * @req: The request with parsed epoll_ctl arguments.
 * @issue_flags: Flags from the issue context.
 *
 * Uses do_epoll_ctl to add, modify, or delete epoll interest in a file descriptor.
 */
static int io_epoll_ctl(struct io_kiocb *req, unsigned int issue_flags)

/**
 * io_epoll_wait_prep - Prepare an epoll_wait request.
 * @req: The io_kiocb holding the request.
 * @sqe: The submission queue entry from userspace.
 *
 * Parses arguments for epoll_wait and sets up timeout/target buffer.
 */
static int io_epoll_wait_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe)

/**
 * io_epoll_wait - Executes the actual epoll_wait syscall.
 * @req: Prepared epoll wait request.
 * @issue_flags: Submission issue context flags.
 *
 * Waits for events using epoll and writes back results to userspace.
 */
static int io_epoll_wait(struct io_kiocb *req, unsigned int issue_flags)

## eventfd.c
/**
 * io_eventfd_register - Registers a user-provided eventfd for signaling completions.
 * @ctx: io_uring context.
 * @fd: File descriptor to register.
 *
 * Associates the eventfd with an io_uring context so it can be signaled on completions.
 */
int io_eventfd_register(struct io_ring_ctx *ctx, int fd)

/**
 * io_eventfd_unregister - Unregister a previously registered eventfd.
 * @ctx: io_uring context.
 *
 * Removes association with an eventfd so it is no longer signaled.
 */
void io_eventfd_unregister(struct io_ring_ctx *ctx)

/**
 * __io_eventfd_signal - Internal signaling helper, with support for deferred signaling.
 * @ctx: io_uring context.
 * @nr: Number of completions to signal.
 * @defer: Whether to defer signal if not needed immediately.
 */
void __io_eventfd_signal(struct io_ring_ctx *ctx, unsigned int nr, bool defer)

/**
 * io_eventfd_signal - Wrapper to immediately signal registered eventfd.
 * @ctx: io_uring context.
 * @nr: Number of completions.
 *
 * Sends a signal to notify the eventfd that completions are available.
 */
void io_eventfd_signal(struct io_ring_ctx *ctx, unsigned int nr)

/**
 * io_eventfd_flush_signal - Sends eventfd signal only if completions occurred since last signal.
 * @ctx: io_uring context.
 *
 * Prevents unnecessary signals by checking completion counters.
 */
void io_eventfd_flush_signal(struct io_ring_ctx *ctx)

/**
 * io_eventfd_grab - Increment reference count for eventfd to prevent early free.
 * @ctx: io_uring context.
 */
void io_eventfd_grab(struct io_ring_ctx *ctx)

/**
 * io_eventfd_release - Decrement reference count for eventfd.
 * @ctx: io_uring context.
 */
void io_eventfd_release(struct io_ring_ctx *ctx)

/**
 * io_eventfd_put - Decrement active reference to eventfd and free if unused.
 * @ctx: io_uring context.
 */
void io_eventfd_put(struct io_ring_ctx *ctx)

/**
 * io_eventfd_free - Free eventfd data structure from context.
 * @ctx: io_uring context.
 */
void io_eventfd_free(struct io_ring_ctx *ctx)

/**
 * io_eventfd_do_signal - Executes actual signal dispatch to eventfd.
 * @ctx: io_uring context.
 */
void io_eventfd_do_signal(struct io_ring_ctx *ctx)

/**
 * io_eventfd_trigger - Explicitly trigger signal dispatch if needed.
 * @ctx: io_uring context.
 */
void io_eventfd_trigger(struct io_ring_ctx *ctx)

## fdinfo.c
/**
 * io_uring_show_fdinfo - Displays debug information for /proc/<pid>/fdinfo.
 * @seq: Sequence file for proc output.
 * @f: File structure representing the io_uring FD.
 *
 * Called by procfs when user inspects an io_uring FD via /proc.
 */
int io_uring_show_fdinfo(struct seq_file *seq, struct file *f)

# Task 1: Information about io_uring source
List in this section source and headers of io_uring. For each of the C source/header, you must put description what's the prime responsibily of the source. Take notes, description of the source should be slightly technical like the example given.

## Source

### advise.c
Store io_madvice & io_fadvice structures, both have the same exact attributes. Which make them basically the same thing. Except function body treat them as separate. Codes which make use of io_madvice are guarded by compilation macro, which make its relevant functions only active if the build flag is set. But functions that make use of io_fadvice are active all the time. The exact difference between io_madvice & io_fadvice will only known after exploring do_madvise function for io_madvice & vfs_fadvise function for io_fadvice.

### alloc_cache.c

Defines functions `io_alloc_cache_free`, `io_alloc_cache_init`, and `io_cache_alloc_new`, which appears to be used for faster, more efficient caching in the io_uring process. The file basically implements a simple fixed-size object cache for use in the io_uring subsystem.


### cancel.c

Defines functions that are used for the process of aborting/cancelling previously submitted I/O process, based on submitted SQE (submission queue entry).
The file provides an implementation for SQE preparation (`io_async_cancel_prep`), asynchronous cancellation submission process (`io_async_cancel`), the cancel process' core cancellation logic (`io_async_cancel_one`), synchronous cancellation (`io_sync_cancel/io_cancel_remove`), and poll-specific unarming process using `io_poll_cancel`.

### epoll.c

Handles support for `epoll` (Linux's I/O event notification mechanism) operations within io_uring's subsystem using io_uring SQEs.
The file contains two structures to handle epoll operations within the io_uring subsystem: `struct io_epoll` for holding necessary information for an `epoll_ctl` operation; and `io_epoll_wait` for holding information for io_uring's `epoll_wait` implementation, which is used to wait for registered I/O events, as well as some functions to prepare and execute epoll operations through io_uring: `io_epoll_ctl_prep` (`epoll_ctl` preparation), `io_epoll_ctl` (executing the prepared `epoll_ctl` operation), `io_epoll_wait_prep` (prepares a request to wait a registered event), `io_epoll_wait` (executes the request to wait a registered event).

### eventfd.c
Handles support and integration of `eventfd` (Linux's built-in mechanism for kernel components or user-space programs to send event notifications) within the io_uring subsystem, often used for notifying programs about completed I/O operations.
Contains a core data structure: `struct io_ev_fd`, for holding all necessary data for managing an `eventfd` that has been registered with an `io_uring` instance, as well as an `enum {IO_EVENTFD_OP_SIGNAL_BIT}` bit flag.
Also contains functions `io_eventfd_register` (registering user-provided eventfd with a specific `io_uring` instance), `io_eventfd_unregister` (unregistering an eventfd from an `io_uring` instance), `io_eventfd_signal` (signaling registered eventfd to notify the application of new completion events), `io_eventfd_flush_signal` (signaling registered eventfd, but optimized such that signaling is avoided when there's no new completion event since the last signal), `__io_eventfd_signal` (for directly signaling eventfd/deferring signal if immediate signaling is not possible), alongside some lifecycle helper functions `io_eventfd_grab`, `io_eventfd_release`, `io_eventfd_put`, `io_eventfd_free`, `io_eventfd_do_signal`, and `io_eventfd_trigger`.

### fdinfo.c
Defines functions for use within io_uring's internal debugging helper, which runs when an io_uring file descriptor is inspected via procfs. The entire file is enclosed in a `#ifdef CONFIG_PROC_FS` flag, which makes the file compile to nothing if `procfs` support is disabled.

### filetable.c
Implements and manages fixed-file tables structure for an io_uring instance/per-ring array of struct `file*` handles that user-space can preinstall once, and then make a reference to by index in I/O submissions. Includes functions `io_alloc_file_tables` (allocation), `io_free_file_tables` (teardown/freeing), `io_file_bitmap_get` (bitmap helper), `__io_fixed_fd_install` and `io_fixed_fd_install` (fixed file install), `io_fixed_fd_remove` (fixed file remove), io_register_file_alloc_range` (UAPI range registration)

### fs.c
Implements file system-related operations within io_uring, enabling submissions of file system calls (mkdir, unlink, symlink, link, rename) as io_uring SQEs. Includes structures needed for file system operations in io_uring: `io_rename` (renaming), `io_unlink` (unlinking), `io_mkdir` (creating directory), `io_link` (linking & symlinking), of which each struct contains necessary metadata for their respective functions; as well as functions for each possible filesystem operations: `io_<operation>_prep`, `io_<operation>`, `io_<operation>_cleanup` (possible operations include `mkdirat`, `unlinkat`, `symlinkat`, `linkat`/`link`, `renameat`).

### futex.c
Implements `futex` (fast userspace mutex) API within io_uring, of which the implementation hooks `futex` into io_uring's asynchronous submission/completion model.

### io_uring.c
The core of the io_uring implementation. Sets up the ring buffer memory, handles registration of resources (buffers, files, etc.), manages submission and completion queue interactions, and contains the high-level syscall entry points for io_uring_setup, `io_uring_enter`, and `io_uring_register`. Includes `struct io_futex` as its core data structure, functions for preparing (SQE parsing) asynchronous futex operations: `io_futex_prep`, `io_futexv_prep` (similar to `io_futex_prep` but for `FUTEX_WAITV`/`FUTEX_WAKEV`, vectorized futex); submission callbacks (calls futex core once the request reaches async worker threads): `io_futex_wait`, `io_futexv_wait`, `io_futexv_wake`; completion callbacks (gets called when a wait actually wakes/times out/finishes): `__io_futex_complete`, `io_futex_complete` (wrapper), `io_futexv_complete`; wake callbacks: `io_futex_wake_fn`, `io_futex_wakev_fn`, cancellation functions (called when user cancels an in-flight SQE): `__io_futex_cancel` (wrapped in `io_futex_cancel`), void `io_futex_cache_free` (freeing cached `file*` references).

### io-wq.c
Implements `io_wq` (I/O workequeue) layer under io_uring, which manages a pool of kernel threads (workers), hashes and dispatches I/O work items onto them, handles cancellation and CPU hot-plug, and teardown. Includes internal data structures `io_worker` (one kernel thread in a pool), `io_wq_acct` (per-cpu accounting for a given `io_wq`), `io_wq` (an I/O workqueue instance), `io_cb_cancel_data` (book-keeping for cancelling a given batch of work items), as well as functions for initialization (`io_wq_create`) & teardown (`io_wq_destroy`, `io_wq_exit_workers`), worker threads (`io_wq_worker`, `io_wq_worker_running`, `io_wq_worker_sleeping`, `io_wq_worker_stopped`), enqueueing (`io_wq_enqueue`) & hashing work (`io_wq_hash_work`, `io_get_next_work`), cancelling work (`io_run_cancel`, `io_wq_cancel`), and CPU hot-plug support (adding & removing CPU from a system without rebooting) implementation (`io_wq_cpu_online`, `io_wq_cpu_down_prep`).

### kbuf.c
Implements a buffer-providing subsystem within `io_uring`, letting applications register groups of user-space buffers with the kernel, and select, map, and commit portions of those buffers for individual I/O submissions. Includes data structures `io_provide_buf` for buffer registration, as well as functions `io_add_buffers`, `io_buffer_add_list`, and `io_map_user_buffers` for registration & mapping; `io_buffer_get_list`, `io_provided_buffer_select`, `io_ring_buffer_select`, `io_provided_buffers_select` and `io_ring_buffers_peek` for selection; `io_kbuf_commit`/`io_kbuf_inc_commit`, `__io_put_kbuf_ring` for committing; and `io_put_bl`, `io_destroy_bl`, and `__io_remove_buffers` for teardown & cleanup.

### memmap.c
Implements a set of structs and functions for managing memory mappings for `io_uring` instances. Includes a structure for use in tracking `memmap`'s memory tracking functionality (`io_mapped_region`), another for describing memory region to be registered/mapped (`io_uring_region_desc`), as well as enums for defining properties of a mapped memory region (`enum { IO_REGION_F_VMAP, IO_REGION_F_USER_PROVIDED, IO_REGION_F_SINGLE_REF, };`), as well as functions for use in creating (`io_pin_pages`, `io_create_region`, `io_create_region_mmap_safe`), mapping (`io_uring_mmap`, `io_uring_get_unmapped_area`), and freeing memory regions (`io_free_region`), and some helper functions.

### msg_ring.c
Implements functions for handling the passing of messages or file descriptors from one io_uring instance to another (inter-ring communication). Includes `io_msg` as its primary data structure, holding all the necessary data for a message ring operation; as well as functions `io_msg_ring_prep` for request preparation, `io_msg_ring` for request execution, `io_msg_ring_data` for CQE passing, `io_msg_send_fd` for passing a file descriptor, `io_msg_grab_file` for grabbing a source file descriptor's reference, `io_msg_install_complete` for source file descriptor installation, remote (different task) completion handling functions (`io_msg_data_remote`, `io_msg_fd_remote`, `io_msg_tw_complete`, `io_msg_tw_fd_complete`), `io_msg_ring_cleanup` for message ring request cleanup, `io_uring_sync_msg_ring` for synchronous request operations, and some locking helpers (`io_lock_external_ctx`, `io_double_unlock_ctx`)

### napi.c
Integrates io_uring with the NAPI (New API) networking subsystem for efficient packet reception. Enables low-overhead network I/O by directly interfacing with NAPI-enabled drivers.

### net.c
Implements asynchronous networking operations, including recv/send for TCP and UDP, using io_uring. Provides support for efficient and scalable network socket operations in a non-blocking fashion.

### nop.c
Defines a no-operation (NOP) handler in io_uring, which is used for testing, benchmarking, or as a placeholder SQE operation. Useful for debugging or delaying execution flow.

### notif.c
Handles notification-based operations that allow userspace to be notified of I/O completions using registered file descriptors or other signaling mechanisms.

### opdef.c
Contains definitions and metadata for each supported io_uring operation code (opcodes), including their required features, flags, and compatibility. Used internally to validate and dispatch SQEs based on their opcode.

### openclose.c
Implements asynchronous file open and close operations (`IORING_OP_OPENAT`, `IORING_OP_CLOSE`, etc.), enabling non-blocking file lifecycle management. Works in conjunction with fs.c and filetable.c.

### poll.c
Handles `IORING_OP_POLL_ADD` and `IORING_OP_POLL_REMOVE`, enabling applications to wait on file descriptors for readiness events asynchronously. Integrates with the kernel's poll subsystem.

### register.c
Implements `io_uring_register` syscall handling for registering files, buffers, personality IDs, and more. Central to reducing syscall overhead and speeding up repeated I/O operations.

### rsrc.c
Manages registered resources (files, buffers, personalities, etc.), providing lifecycle control and fast lookup for use in I/O operations. Works closely with `register.c` and `filetable.c`.

### rw.c
Implements read/write operations (e.g., `IORING_OP_READ`, `IORING_OP_WRITE`, etc.) for regular files and devices. Supports both direct and buffered I/O depending on flags and context.

### splice.c
Handles `IORING_OP_SPLICE`, which allows data transfer between file descriptors without copying into userspace. Supports zero-copy movement for high-throughput applications.

### sqpoll.c
Implements SQPOLL (submission queue polling), where a dedicated kernel thread continuously polls the submission queue to reduce syscall latency. Allows user applications to submit I/O without kernel transitions in certain cases.

### statx.c
Implements `IORING_OP_STATX` to asynchronously retrieve file status information, similar to the statx syscall. Enables non-blocking stat operations in io_uring.

### sync.c
Implements various synchronization operations, including `IORING_OP_FSYNC`, `IORING_OP_SYNC_FILE_RANGE`, and `IORING_OP_WAIT_SYNC`. Ensures durability and consistency of data after writes.

### tctx.c
Manages `task_context` structures, which are per-task (per-thread) contexts for io_uring. Handles initialization, cleanup, and resource management for each user task that uses io_uring.

### timeout.c
Implements timeout and linked timeout operations (`IORING_OP_TIMEOUT`, `IORING_OP_TIMEOUT_REMOVE`, etc.). Allows for scheduling time-based operations and enforcing deadlines on I/O.

### truncate.c
Implements `IORING_OP_FTRUNCATE`, allowing asynchronous file truncation (resize) operations to be performed using io_uring.

### uring_cmd.c
Supports the `IORING_OP_URING_CMD`, which allows sending custom commands to specific subsystems (e.g., storage drivers) from userspace via io_uring. Enables extensibility and vendor-specific operations.

### waitid.c
Implements `IORING_OP_WAITID`, a system call wrapper for asynchronously waiting on process exit/status change events. Enables process-level synchronization using io_uring.

### xattr.c
Implements extended attribute (xattr) operations, enabling asynchronous get/set/remove of file extended attributes using `IORING_OP_GETXATTR`, `IORING_OP_SETXATTR`, etc.

### zcrx.c
Implements zero-copy receive support for networking (`ZC RX`), allowing data to be received directly into user-provided buffers without additional memory copies. Designed for very high-performance networking.

## Headers

### advise.h
Just declare the function specification.

### alloc_cache.h
Defines the cache size limit, specification of the functions implemented in the `alloc_cache.c`, as well as functions/APIs for use by other files such as `io_alloc_cache_put`, `io_alloc_cache_get`, `io_cache_alloc`, and`io_cache_free`, of which those functions are used for the caching procedures.

### cancel.h

Defines the prototype for functions implemented in `cancel.c`, the definition of `io_cancel_data` data structure also used in other source files of io_uring, and the function declaration & implementation `io_cancel_match_sequence`, which is used to ensure that the cancel-all operation cancels every request exactly once, preventing the same request from being cancelled more than once.

### epoll.h

The file only defines the prototype for functions implemented in `epoll.c`.

### eventfd.h

The file only defines the prototype for functions implemented in `eventfd.c`.

### fdinfo.h

The file only defines the prototype for the function `io_uring_show_fdinfo`, implemented in `fdinfo.c`.

### filetable.h

Defines the prototype for functions implemented in `filetable.c`, as well as the definitions of functions `io_file_bitmap_clear`, `io_file_bitmap_set`, `io_slot_flags`, `io_slot_file`, `io_fixed_file_set`, and `io_file_table_set_alloc_range`, as well as definition for macros `FFS_NOWAIT`, `FFS_ISREG`, and `FFS_MASK`.

### fs.h

The file only defines the prototype for functions implemented in `fs.c`.

### futex.h
Defines function prototypes and structures related to futex operations, for use in futex.c and other internal logic involving wait queues and fast mutexes.

### io_uring.h
Defines core data structures, constants, and prototypes used across nearly every io_uring source file. Includes SQE/CQE definitions, flags, and system-wide configuration macros.

### io-wq.h
Declares structures and function prototypes to be implemented in the `io-wq.c` source file, as well as structures `io_wq_hash`, `io_wq_data`,; enums for `io_wq` status; type aliases `io_wq_work` and `io_wq_work_fn`, and function implementations for `io_wq_put_hash`, `io_wq_is_hashed`, and `io_wq_current_is_worker`.

### kbuf.h
Defines structures and function prototypes to be implemented in `kbuf.c`, as well as interface and helper functions for kernel buffer management used in zero-copy and inline buffer operations.

### memmap.h
Defines function prototypes to be implemented in memmap.c, as well as functions helper functions for getting pointers of a region (`io_region_get_ptr`), and checking if a region is set (`io_region_is_set`)

### msg_ring.h
Defines function prototypes to be implemented in `msg_ring.c`.

### napi.h
Declares functions for handling integration with the Linux NAPI networking API, allowing efficient packet processing in conjunction with io_uring.

### net.h
Contains function declarations and helper macros used for handling networking operations, including socket send/receive functions for various protocols.

### nop.h
Defines the function prototype for the no-op handler in io_uring.

### notif.h
Declares structures and functions related to internal notification mechanisms, signaling interfaces, and integration with eventfd or signal-based completion.

### opdef.h
Defines internal constants, flags, and data structures used to declare and manage io_uring operation definitions.

### openclose.h
Contains function declarations related to file open/close operations within the io_uring context.

### poll.h
Declares prototypes and data structures for polling support, used for monitoring file descriptor readiness.

### refs.h
Provides reference-counting helper macros and inline functions for resource management in io_uring.

### register.h
Declares internal functions used for handling resource registration, including buffers, files, and personality IDs.

### rsrc.h
Defines internal structures and management functions for registered resources used in io_uring.

### rw.h
Declares the read/write handlers and related data structures for I/O operations.

### slist.h
Implements a simple lockless singly-linked list, used for efficient communication between threads in the kernel.

### splice.h
Declares splice operation handlers and internal helper functions for zero-copy data movement.

### sqpoll.h
Defines functions and macros related to the submission queue polling feature, including management of the SQPOLL thread.

### statx.h
Contains function prototypes and helper functions for statx (stat with extended info) file operations.

### sync.h
Declares synchronization-related operations and helper utilities for ensuring file and data durability.

### tctx.h
Declares task context structures and helper functions, enabling per-task lifecycle management in io_uring.

### timeout.h
Declares timeout operation prototypes and helper macros used to schedule and manage timed I/O.

### truncate.h
Declares asynchronous truncate operation handler used in truncate.c.

### uring_cmd.h
Declares data structures and prototypes used for vendor-defined or driver-specific commands through io_uring.

### waitid.h
Defines prototypes for waitid operation handlers and related data structures used to monitor process state changes.

### xattr.h
Declares get/set/remove extended attribute handlers and supporting structures.

### zcrx.h
Declares functions and structures for zero-copy receive networking support, enabling fast and memory-efficient packet handling.

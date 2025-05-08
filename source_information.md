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
Implements io_uring_show_fdinfo, a helper function to print file descriptor-related debug or introspection information when /proc/*/fdinfo is queried. Used to expose io_uring-specific file descriptor info to userspace via the proc filesystem.

### filetable.c
Implements io_uring_show_fdinfo, a helper function to print file descriptor-related debug or introspection information when /proc/*/fdinfo is queried. Used to expose io_uring-specific file descriptor info to userspace via the proc filesystem.

### fs.c
Handles filesystem-related operations in io_uring, such as async path resolution and file lookup, particularly for openat/openat2 operations. Implements functions related to path resolution caching, directory traversal, and credentials management used during file-related syscalls.

### futex.c
Implements support for futex (fast userspace mutex) operations in io_uring. The file integrates futex wait/wake requests with the asynchronous model of io_uring using kernel mechanisms like futex_wait_setup and futex_wake.

### io_uring.c
The core of the io_uring implementation. Sets up the ring buffer memory, handles registration of resources (buffers, files, etc.), manages submission and completion queue interactions, and contains the high-level syscall entry points for io_uring_setup, io_uring_enter, and io_uring_register.

### io-wq.c
Implements the io-wq (I/O worker queue) system used by io_uring to perform blocking I/O in worker threads without stalling the main context. Includes thread pool management, work item dispatch, and priority handling for background I/O operations.

### kbuf.c
Manages kernel-side buffer operations, specifically for providing zero-copy data transfers and inline buffers for I/O. Helps in reducing memory copy overhead for high-performance data paths.

### memmap.c
Handles memory mapping-related functionality within io_uring, particularly for supporting the IORING_OP_MMAP operation. Manages pinning of user pages and proper cleanup during teardown of memory mappings.

### msg_ring.c
Supports inter-ring communication using IORING_OP_MSG_RING, allowing one io_uring instance to send messages or commands to another. Provides a mechanism for advanced coordination between rings or between user and kernel contexts.

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
Implements asynchronous file open and close operations (IORING_OP_OPENAT, IORING_OP_CLOSE, etc.), enabling non-blocking file lifecycle management. Works in conjunction with fs.c and filetable.c.

### poll.c
Handles IORING_OP_POLL_ADD and IORING_OP_POLL_REMOVE, enabling applications to wait on file descriptors for readiness events asynchronously. Integrates with the kernel's poll subsystem.

### register.c
Implements io_uring_register syscall handling for registering files, buffers, personality IDs, and more. Central to reducing syscall overhead and speeding up repeated I/O operations.

### rsrc.c
Manages registered resources (files, buffers, personalities, etc.), providing lifecycle control and fast lookup for use in I/O operations. Works closely with register.c and filetable.c.

### rw.c
Implements read/write operations (e.g., IORING_OP_READ, IORING_OP_WRITE, etc.) for regular files and devices. Supports both direct and buffered I/O depending on flags and context.

### splice.c
Handles IORING_OP_SPLICE, which allows data transfer between file descriptors without copying into userspace. Supports zero-copy movement for high-throughput applications.

### sqpoll.c
Implements SQPOLL (submission queue polling), where a dedicated kernel thread continuously polls the submission queue to reduce syscall latency. Allows user applications to submit I/O without kernel transitions in certain cases.

### statx.c
Implements IORING_OP_STATX to asynchronously retrieve file status information, similar to the statx syscall. Enables non-blocking stat operations in io_uring.

### sync.c
Implements various synchronization operations, including IORING_OP_FSYNC, IORING_OP_SYNC_FILE_RANGE, and IORING_OP_WAIT_SYNC. Ensures durability and consistency of data after writes.

### tctx.c
Manages task_context structures, which are per-task (per-thread) contexts for io_uring. Handles initialization, cleanup, and resource management for each user task that uses io_uring.

### timeout.c
Implements timeout and linked timeout operations (IORING_OP_TIMEOUT, IORING_OP_TIMEOUT_REMOVE, etc.). Allows for scheduling time-based operations and enforcing deadlines on I/O.

### truncate.c
Implements IORING_OP_FTRUNCATE, allowing asynchronous file truncation (resize) operations to be performed using io_uring.

### uring_cmd.c
Supports the IORING_OP_URING_CMD, which allows sending custom commands to specific subsystems (e.g., storage drivers) from userspace via io_uring. Enables extensibility and vendor-specific operations.

### waitid.c
Implements IORING_OP_WAITID, a system call wrapper for asynchronously waiting on process exit/status change events. Enables process-level synchronization using io_uring.

### xattr.c
Implements extended attribute (xattr) operations, enabling asynchronous get/set/remove of file extended attributes using IORING_OP_GETXATTR, IORING_OP_SETXATTR, etc.

### zcrx.c
Implements zero-copy receive support for networking (ZC RX), allowing data to be received directly into user-provided buffers without additional memory copies. Designed for very high-performance networking.

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

### io_uring.h

### io-wq.h

### kbuf.h

### memmap.h

### msg_ring.h

### napi.h

### net.h

### nop.h

### notif.h

### opdef.h

### openclose.h

### poll.h

### refs.h

### register.h

### rsrc.h

### rw.h

### slist.h

### splice.h

### sqpoll.h

### statx.h

### sync.h

### tctx.h

### timeout.h

### truncate.h

### uring_cmd.h

### waitid.h

### xattr.h

### zcrx.h

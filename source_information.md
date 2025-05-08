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

### filetable.c

### fs.c

### futex.c

### io_uring.c

### io-wq.c

### kbuf.c

### memmap.c

### msg_ring.c

### napi.c

### net.c

### nop.c

### notif.c

### opdef.c

### openclose.c

### poll.c

### register.c

### rsrc.c

### rw.c

### splice.c

### sqpoll.c

### statx.c

### sync.c

### tctx.c

### timeout.c

### truncate.c

### uring_cmd.c

### waitid.c

### xattr.c

### zcrx.c

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

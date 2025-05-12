# Task 4: Documenting function
For the final part of the assignment, you won't fill any info in this readme. But put any explanation on each function definition on all sources of io_uring subdirectory. For the given example you can check epoll.c, on function io_epoll_ctl. 

/**
 * io_madvise_prep - Prepare a madvise SQE (I/O memory advice) request.
 * @req: The io_kiocb structure holding the request.
 * @cmd: The sqe data parsed from userspace.
 *
 * Validates the user-passed parameters and stores them into the request.
 */
static int io_madvise_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe)

/**
 * io_madvise - Executes a madvise operation on a memory range.
 * @req: io_kiocb containing prepared request data.
 * @issue_flags: Flags related to SQE issue.
 *
 * Performs madvise on user-provided memory address range using do_madvise().
 */
static int io_madvise(struct io_kiocb *req, unsigned int issue_flags)

/**
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
 * @issue_flags: Flags passed during SQE issue phase.
 *
 * Calls vfs_fadvise() to inform the kernel about expected I/O patterns.
 */
static int io_fadvise(struct io_kiocb *req, unsigned int issue_flags)


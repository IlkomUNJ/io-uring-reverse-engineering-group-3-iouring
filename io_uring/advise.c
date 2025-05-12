// SPDX-License-Identifier: GPL-2.0
#include <linux/kernel.h>
#include <linux/errno.h>
#include <linux/fs.h>
#include <linux/file.h>
#include <linux/mm.h>
#include <linux/slab.h>
#include <linux/namei.h>
#include <linux/io_uring.h>

#include <uapi/linux/fadvise.h>
#include <uapi/linux/io_uring.h>

#include "io_uring.h"
#include "advise.h"

struct io_fadvise {
	struct file			*file;
	u64				offset;
	u64				len;
	u32				advice;
};

struct io_madvise {
	struct file			*file;
	u64				addr;
	u64				len;
	u32				advice;
};
/**
 * io_madvise_prep - Prepare a madvise request from SQE
 * @req: the io_kiocb request structure
 * @sqe: submission queue entry from userspace
 *
 * Extracts madvise parameters from the SQE and stores them in
 * the io_madvise structure. Forces async execution. Only available
 * if CONFIG_ADVISE_SYSCALLS and CONFIG_MMU are enabled.
 */
int io_madvise_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe)
{
#if defined(CONFIG_ADVISE_SYSCALLS) && defined(CONFIG_MMU)
	struct io_madvise *ma = io_kiocb_to_cmd(req, struct io_madvise);

	if (sqe->buf_index || sqe->splice_fd_in)
		return -EINVAL;

	ma->addr = READ_ONCE(sqe->addr);
	ma->len = READ_ONCE(sqe->off);
	if (!ma->len)
		ma->len = READ_ONCE(sqe->len);
	ma->advice = READ_ONCE(sqe->fadvise_advice);
	req->flags |= REQ_F_FORCE_ASYNC;
	return 0;
#else
	return -EOPNOTSUPP;
#endif
}
/**
 * io_madvise - Submit madvise syscall via io_uring
 * @req: the prepared madvise request
 * @issue_flags: issue-time execution flags
 *
 * Executes the madvise syscall asynchronously using do_madvise(),
 * applying memory advice for a memory region. Not supported unless
 * CONFIG_ADVISE_SYSCALLS and CONFIG_MMU are enabled.
 */
int io_madvise(struct io_kiocb *req, unsigned int issue_flags)
{
#if defined(CONFIG_ADVISE_SYSCALLS) && defined(CONFIG_MMU)
	struct io_madvise *ma = io_kiocb_to_cmd(req, struct io_madvise);
	int ret;

	WARN_ON_ONCE(issue_flags & IO_URING_F_NONBLOCK);

	ret = do_madvise(current->mm, ma->addr, ma->len, ma->advice);
	io_req_set_res(req, ret, 0);
	return IOU_OK;
#else
	return -EOPNOTSUPP;
#endif
}
/**
 * io_fadvise_force_async - Check if fadvise should be forced async
 * @fa: pointer to io_fadvise structure
 *
 * Returns true if the advice type requires asynchronous submission.
 * Normal, random, and sequential do not require forcing async mode.
 */
static bool io_fadvise_force_async(struct io_fadvise *fa)
{
	switch (fa->advice) {
	case POSIX_FADV_NORMAL:
	case POSIX_FADV_RANDOM:
	case POSIX_FADV_SEQUENTIAL:
		return false;
	default:
		return true;
	}
}
/**
 * io_fadvise_prep - Prepare a fadvise request from SQE
 * @req: the io_kiocb request
 * @sqe: submission queue entry from userspace
 *
 * Extracts offset, length, and advice type from the SQE,
 * and stores it in the io_fadvise structure. Flags request
 * as async if needed.
 */
int io_fadvise_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe)
{
	struct io_fadvise *fa = io_kiocb_to_cmd(req, struct io_fadvise);

	if (sqe->buf_index || sqe->splice_fd_in)
		return -EINVAL;

	fa->offset = READ_ONCE(sqe->off);
	fa->len = READ_ONCE(sqe->addr);
	if (!fa->len)
		fa->len = READ_ONCE(sqe->len);
	fa->advice = READ_ONCE(sqe->fadvise_advice);
	if (io_fadvise_force_async(fa))
		req->flags |= REQ_F_FORCE_ASYNC;
	return 0;
}
/**
 * io_fadvise - Execute fadvise syscall via io_uring
 * @req: the prepared request
 * @issue_flags: issue-time flags
 *
 * Calls vfs_fadvise() to provide kernel advice on file access
 * patterns. Handles error and sets the result on the request.
 */
int io_fadvise(struct io_kiocb *req, unsigned int issue_flags)
{
	struct io_fadvise *fa = io_kiocb_to_cmd(req, struct io_fadvise);
	int ret;

	WARN_ON_ONCE(issue_flags & IO_URING_F_NONBLOCK && io_fadvise_force_async(fa));

	ret = vfs_fadvise(req->file, fa->offset, fa->len, fa->advice);
	if (ret < 0)
		req_set_fail(req);
	io_req_set_res(req, ret, 0);
	return IOU_OK;
}

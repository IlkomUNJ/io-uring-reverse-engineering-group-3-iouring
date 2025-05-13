// SPDX-License-Identifier: GPL-2.0
#include <linux/kernel.h>
#include <linux/errno.h>
#include <linux/fs.h>
#include <linux/file.h>
#include <linux/mm.h>
#include <linux/slab.h>
#include <linux/namei.h>
#include <linux/io_uring.h>

#include <uapi/linux/io_uring.h>

#include "../fs/internal.h"

#include "io_uring.h"
#include "fs.h"

struct io_rename {
	struct file			*file;
	int				old_dfd;
	int				new_dfd;
	struct filename			*oldpath;
	struct filename			*newpath;
	int				flags;
};

struct io_unlink {
	struct file			*file;
	int				dfd;
	int				flags;
	struct filename			*filename;
};

struct io_mkdir {
	struct file			*file;
	int				dfd;
	umode_t				mode;
	struct filename			*filename;
};

struct io_link {
	struct file			*file;
	int				old_dfd;
	int				new_dfd;
	struct filename			*oldpath;
	struct filename			*newpath;
	int				flags;
};

/**
 * io_renameat_prep - Prepare a renameat2 request
 * @req: the io_kiocb structure
 * @sqe: the submission queue entry from userspace
 *
 * Parses and stores rename operation parameters including old and new paths,
 * file descriptors, and flags.
 */
int io_renameat_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe)
{
	struct io_rename *ren = io_kiocb_to_cmd(req, struct io_rename);
	const char __user *oldf, *newf;

	if (sqe->buf_index || sqe->splice_fd_in)
		return -EINVAL;
	if (unlikely(req->flags & REQ_F_FIXED_FILE))
		return -EBADF;

	ren->old_dfd = READ_ONCE(sqe->fd);
	oldf = u64_to_user_ptr(READ_ONCE(sqe->addr));
	newf = u64_to_user_ptr(READ_ONCE(sqe->addr2));
	ren->new_dfd = READ_ONCE(sqe->len);
	ren->flags = READ_ONCE(sqe->rename_flags);

	ren->oldpath = getname(oldf);
	if (IS_ERR(ren->oldpath))
		return PTR_ERR(ren->oldpath);

	ren->newpath = getname(newf);
	if (IS_ERR(ren->newpath)) {
		putname(ren->oldpath);
		return PTR_ERR(ren->newpath);
	}

	req->flags |= REQ_F_NEED_CLEANUP;
	req->flags |= REQ_F_FORCE_ASYNC;
	return 0;
}

/**
 * io_renameat - Execute a renameat2 system call
 * @req: the prepared request
 * @issue_flags: unused issue-time flags
 *
 * Calls do_renameat2() with parameters stored in the request.
 */
int io_renameat(struct io_kiocb *req, unsigned int issue_flags)
{
	struct io_rename *ren = io_kiocb_to_cmd(req, struct io_rename);
	int ret;

	WARN_ON_ONCE(issue_flags & IO_URING_F_NONBLOCK);

	ret = do_renameat2(ren->old_dfd, ren->oldpath, ren->new_dfd,
				ren->newpath, ren->flags);

	req->flags &= ~REQ_F_NEED_CLEANUP;
	io_req_set_res(req, ret, 0);
	return IOU_OK;
}
/**
 * io_renameat_cleanup - Cleanup resources for renameat
 * @req: the io_kiocb request
 *
 * Frees old and new filenames if they were allocated.
 */
void io_renameat_cleanup(struct io_kiocb *req)
{
	struct io_rename *ren = io_kiocb_to_cmd(req, struct io_rename);

	putname(ren->oldpath);
	putname(ren->newpath);
}
/**
 * io_unlinkat_prep - Prepare an unlink or rmdir operation
 * @req: the io_kiocb structure
 * @sqe: the submission queue entry
 *
 * Parses and stores parameters to perform unlinkat or rmdir.
 */
int io_unlinkat_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe)
{
	struct io_unlink *un = io_kiocb_to_cmd(req, struct io_unlink);
	const char __user *fname;

	if (sqe->off || sqe->len || sqe->buf_index || sqe->splice_fd_in)
		return -EINVAL;
	if (unlikely(req->flags & REQ_F_FIXED_FILE))
		return -EBADF;

	un->dfd = READ_ONCE(sqe->fd);

	un->flags = READ_ONCE(sqe->unlink_flags);
	if (un->flags & ~AT_REMOVEDIR)
		return -EINVAL;

	fname = u64_to_user_ptr(READ_ONCE(sqe->addr));
	un->filename = getname(fname);
	if (IS_ERR(un->filename))
		return PTR_ERR(un->filename);

	req->flags |= REQ_F_NEED_CLEANUP;
	req->flags |= REQ_F_FORCE_ASYNC;
	return 0;
}
/**
 * io_unlinkat - Execute unlinkat or rmdir
 * @req: the prepared request
 * @issue_flags: unused issue flags
 *
 * Calls appropriate VFS function to delete file or directory.
 */
int io_unlinkat(struct io_kiocb *req, unsigned int issue_flags)
{
	struct io_unlink *un = io_kiocb_to_cmd(req, struct io_unlink);
	int ret;

	WARN_ON_ONCE(issue_flags & IO_URING_F_NONBLOCK);

	if (un->flags & AT_REMOVEDIR)
		ret = do_rmdir(un->dfd, un->filename);
	else
		ret = do_unlinkat(un->dfd, un->filename);

	req->flags &= ~REQ_F_NEED_CLEANUP;
	io_req_set_res(req, ret, 0);
	return IOU_OK;
}

/**
 * io_unlinkat_cleanup - Cleanup unlinkat request
 * @req: the request structure
 *
 * Frees the filename used in unlinkat.
 */
void io_unlinkat_cleanup(struct io_kiocb *req)
{
	struct io_unlink *ul = io_kiocb_to_cmd(req, struct io_unlink);

	putname(ul->filename);
}

/**
 * io_mkdirat_prep - Prepare mkdirat operation
 * @req: the request structure
 * @sqe: the submission queue entry
 *
 * Parses mkdir parameters such as path and mode.
 */
int io_mkdirat_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe)
{
	struct io_mkdir *mkd = io_kiocb_to_cmd(req, struct io_mkdir);
	const char __user *fname;

	if (sqe->off || sqe->rw_flags || sqe->buf_index || sqe->splice_fd_in)
		return -EINVAL;
	if (unlikely(req->flags & REQ_F_FIXED_FILE))
		return -EBADF;

	mkd->dfd = READ_ONCE(sqe->fd);
	mkd->mode = READ_ONCE(sqe->len);

	fname = u64_to_user_ptr(READ_ONCE(sqe->addr));
	mkd->filename = getname(fname);
	if (IS_ERR(mkd->filename))
		return PTR_ERR(mkd->filename);

	req->flags |= REQ_F_NEED_CLEANUP;
	req->flags |= REQ_F_FORCE_ASYNC;
	return 0;
}

/**
 * io_mkdirat - Perform mkdirat syscall
 * @req: the request structure
 * @issue_flags: unused
 *
 * Executes a mkdirat syscall using prepared arguments.
 */
int io_mkdirat(struct io_kiocb *req, unsigned int issue_flags)
{
	struct io_mkdir *mkd = io_kiocb_to_cmd(req, struct io_mkdir);
	int ret;

	WARN_ON_ONCE(issue_flags & IO_URING_F_NONBLOCK);

	ret = do_mkdirat(mkd->dfd, mkd->filename, mkd->mode);

	req->flags &= ~REQ_F_NEED_CLEANUP;
	io_req_set_res(req, ret, 0);
	return IOU_OK;
}

/**
 * io_mkdirat_cleanup - Cleanup mkdirat request
 * @req: request structure
 *
 * Frees allocated filename for mkdir.
 */
void io_mkdirat_cleanup(struct io_kiocb *req)
{
	struct io_mkdir *md = io_kiocb_to_cmd(req, struct io_mkdir);

	putname(md->filename);
}

/**
 * io_symlinkat_prep - Prepare symlinkat operation
 * @req: the request structure
 * @sqe: submission queue entry
 *
 * Parses source and destination paths for creating symbolic link.
 */
int io_symlinkat_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe)
{
	struct io_link *sl = io_kiocb_to_cmd(req, struct io_link);
	const char __user *oldpath, *newpath;

	if (sqe->len || sqe->rw_flags || sqe->buf_index || sqe->splice_fd_in)
		return -EINVAL;
	if (unlikely(req->flags & REQ_F_FIXED_FILE))
		return -EBADF;

	sl->new_dfd = READ_ONCE(sqe->fd);
	oldpath = u64_to_user_ptr(READ_ONCE(sqe->addr));
	newpath = u64_to_user_ptr(READ_ONCE(sqe->addr2));

	sl->oldpath = getname(oldpath);
	if (IS_ERR(sl->oldpath))
		return PTR_ERR(sl->oldpath);

	sl->newpath = getname(newpath);
	if (IS_ERR(sl->newpath)) {
		putname(sl->oldpath);
		return PTR_ERR(sl->newpath);
	}

	req->flags |= REQ_F_NEED_CLEANUP;
	req->flags |= REQ_F_FORCE_ASYNC;
	return 0;
}

/**
 * io_symlinkat - Perform symlinkat syscall
 * @req: the request structure
 * @issue_flags: unused
 *
 * Executes symlink creation using do_symlinkat().
 */
int io_symlinkat(struct io_kiocb *req, unsigned int issue_flags)
{
	struct io_link *sl = io_kiocb_to_cmd(req, struct io_link);
	int ret;

	WARN_ON_ONCE(issue_flags & IO_URING_F_NONBLOCK);

	ret = do_symlinkat(sl->oldpath, sl->new_dfd, sl->newpath);

	req->flags &= ~REQ_F_NEED_CLEANUP;
	io_req_set_res(req, ret, 0);
	return IOU_OK;
}

/**
 * io_linkat_prep - Prepare hardlink operation
 * @req: the request structure
 * @sqe: submission queue entry
 *
 * Prepares for creating a hard link using parameters from SQE.
 */
int io_linkat_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe)
{
	struct io_link *lnk = io_kiocb_to_cmd(req, struct io_link);
	const char __user *oldf, *newf;

	if (sqe->buf_index || sqe->splice_fd_in)
		return -EINVAL;
	if (unlikely(req->flags & REQ_F_FIXED_FILE))
		return -EBADF;

	lnk->old_dfd = READ_ONCE(sqe->fd);
	lnk->new_dfd = READ_ONCE(sqe->len);
	oldf = u64_to_user_ptr(READ_ONCE(sqe->addr));
	newf = u64_to_user_ptr(READ_ONCE(sqe->addr2));
	lnk->flags = READ_ONCE(sqe->hardlink_flags);

	lnk->oldpath = getname_uflags(oldf, lnk->flags);
	if (IS_ERR(lnk->oldpath))
		return PTR_ERR(lnk->oldpath);

	lnk->newpath = getname(newf);
	if (IS_ERR(lnk->newpath)) {
		putname(lnk->oldpath);
		return PTR_ERR(lnk->newpath);
	}

	req->flags |= REQ_F_NEED_CLEANUP;
	req->flags |= REQ_F_FORCE_ASYNC;
	return 0;
}

/**
 * io_linkat - Execute hard link creation
 * @req: the request structure
 * @issue_flags: unused
 *
 * Calls do_linkat() to create a hard link between paths.
 */
int io_linkat(struct io_kiocb *req, unsigned int issue_flags)
{
	struct io_link *lnk = io_kiocb_to_cmd(req, struct io_link);
	int ret;

	WARN_ON_ONCE(issue_flags & IO_URING_F_NONBLOCK);

	ret = do_linkat(lnk->old_dfd, lnk->oldpath, lnk->new_dfd,
				lnk->newpath, lnk->flags);

	req->flags &= ~REQ_F_NEED_CLEANUP;
	io_req_set_res(req, ret, 0);
	return IOU_OK;
}

/**
 * io_link_cleanup - Cleanup for symlink/link operations
 * @req: the request structure
 *
 * Frees allocated paths used in link or symlink operations.
 */
void io_link_cleanup(struct io_kiocb *req)
{
	struct io_link *sl = io_kiocb_to_cmd(req, struct io_link);

	putname(sl->oldpath);
	putname(sl->newpath);
}

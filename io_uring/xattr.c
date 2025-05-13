// SPDX-License-Identifier: GPL-2.0
#include <linux/kernel.h>
#include <linux/errno.h>
#include <linux/fs.h>
#include <linux/file.h>
#include <linux/mm.h>
#include <linux/slab.h>
#include <linux/namei.h>
#include <linux/io_uring.h>
#include <linux/xattr.h>

#include <uapi/linux/io_uring.h>

#include "../fs/internal.h"

#include "io_uring.h"
#include "xattr.h"

struct io_xattr {
	struct file			*file;
	struct kernel_xattr_ctx		ctx;
	struct filename			*filename;
};
/*
 * io_xattr_cleanup - TODO: Describe what this function does.
 * @param struct io_kiocb *req
 * @return TODO: Return value description.
 */

void io_xattr_cleanup(struct io_kiocb *req)
{
	struct io_xattr *ix = io_kiocb_to_cmd(req, struct io_xattr);

	if (ix->filename)
		putname(ix->filename);

	kfree(ix->ctx.kname);
	kvfree(ix->ctx.kvalue);
/*
 * io_xattr_finish - TODO: Describe what this function does.
 * @param struct io_kiocb *req
 * @param int ret
 * @return TODO: Return value description.
 */
}

static void io_xattr_finish(struct io_kiocb *req, int ret)
{
	req->flags &= ~REQ_F_NEED_CLEANUP;

	io_xattr_cleanup(req);
/*
 * __io_getxattr_prep - TODO: Describe what this function does.
 * @param struct io_kiocb *req
 * @param const struct io_uring_sqe *sqe
 * @return TODO: Return value description.
 */
	io_req_set_res(req, ret, 0);
}

static int __io_getxattr_prep(struct io_kiocb *req,
			      const struct io_uring_sqe *sqe)
{
	struct io_xattr *ix = io_kiocb_to_cmd(req, struct io_xattr);
	const char __user *name;
	int ret;

	ix->filename = NULL;
	ix->ctx.kvalue = NULL;
	name = u64_to_user_ptr(READ_ONCE(sqe->addr));
	ix->ctx.value = u64_to_user_ptr(READ_ONCE(sqe->addr2));
	ix->ctx.size = READ_ONCE(sqe->len);
	ix->ctx.flags = READ_ONCE(sqe->xattr_flags);

	if (ix->ctx.flags)
		return -EINVAL;

	ix->ctx.kname = kmalloc(sizeof(*ix->ctx.kname), GFP_KERNEL);
	if (!ix->ctx.kname)
		return -ENOMEM;

	ret = import_xattr_name(ix->ctx.kname, name);
	if (ret) {
		kfree(ix->ctx.kname);
		return ret;
	}

	req->flags |= REQ_F_NEED_CLEANUP;
/*
 * io_fgetxattr_prep - TODO: Describe what this function does.
 * @param struct io_kiocb *req
 * @param const struct io_uring_sqe *sqe
 * @return TODO: Return value description.
 */
	req->flags |= REQ_F_FORCE_ASYNC;
	return 0;
}

/*
 * io_getxattr_prep - TODO: Describe what this function does.
 * @param struct io_kiocb *req
 * @param const struct io_uring_sqe *sqe
 * @return TODO: Return value description.
 */
int io_fgetxattr_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe)
{
	return __io_getxattr_prep(req, sqe);
}

int io_getxattr_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe)
{
	struct io_xattr *ix = io_kiocb_to_cmd(req, struct io_xattr);
	const char __user *path;
	int ret;

	if (unlikely(req->flags & REQ_F_FIXED_FILE))
		return -EBADF;

	ret = __io_getxattr_prep(req, sqe);
	if (ret)
		return ret;

	path = u64_to_user_ptr(READ_ONCE(sqe->addr3));

	ix->filename = getname(path);
/*
 * io_fgetxattr - TODO: Describe what this function does.
 * @param struct io_kiocb *req
 * @param unsigned int issue_flags
 * @return TODO: Return value description.
 */
	if (IS_ERR(ix->filename))
		return PTR_ERR(ix->filename);

	return 0;
}

int io_fgetxattr(struct io_kiocb *req, unsigned int issue_flags)
{
	struct io_xattr *ix = io_kiocb_to_cmd(req, struct io_xattr);
	int ret;

/*
 * io_getxattr - TODO: Describe what this function does.
 * @param struct io_kiocb *req
 * @param unsigned int issue_flags
 * @return TODO: Return value description.
 */
	WARN_ON_ONCE(issue_flags & IO_URING_F_NONBLOCK);

	ret = file_getxattr(req->file, &ix->ctx);
	io_xattr_finish(req, ret);
	return IOU_OK;
}

int io_getxattr(struct io_kiocb *req, unsigned int issue_flags)
{
	struct io_xattr *ix = io_kiocb_to_cmd(req, struct io_xattr);
	int ret;

/*
 * __io_setxattr_prep - TODO: Describe what this function does.
 * @param struct io_kiocb *req
 * @param const struct io_uring_sqe *sqe
 * @return TODO: Return value description.
 */
	WARN_ON_ONCE(issue_flags & IO_URING_F_NONBLOCK);

	ret = filename_getxattr(AT_FDCWD, ix->filename, LOOKUP_FOLLOW, &ix->ctx);
	ix->filename = NULL;
	io_xattr_finish(req, ret);
	return IOU_OK;
}

static int __io_setxattr_prep(struct io_kiocb *req,
			const struct io_uring_sqe *sqe)
{
	struct io_xattr *ix = io_kiocb_to_cmd(req, struct io_xattr);
	const char __user *name;
	int ret;

	ix->filename = NULL;
	name = u64_to_user_ptr(READ_ONCE(sqe->addr));
	ix->ctx.cvalue = u64_to_user_ptr(READ_ONCE(sqe->addr2));
	ix->ctx.kvalue = NULL;
	ix->ctx.size = READ_ONCE(sqe->len);
	ix->ctx.flags = READ_ONCE(sqe->xattr_flags);

	ix->ctx.kname = kmalloc(sizeof(*ix->ctx.kname), GFP_KERNEL);
	if (!ix->ctx.kname)
		return -ENOMEM;

	ret = setxattr_copy(name, &ix->ctx);
	if (ret) {
/*
 * io_setxattr_prep - TODO: Describe what this function does.
 * @param struct io_kiocb *req
 * @param const struct io_uring_sqe *sqe
 * @return TODO: Return value description.
 */
		kfree(ix->ctx.kname);
		return ret;
	}

	req->flags |= REQ_F_NEED_CLEANUP;
	req->flags |= REQ_F_FORCE_ASYNC;
	return 0;
}

int io_setxattr_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe)
{
	struct io_xattr *ix = io_kiocb_to_cmd(req, struct io_xattr);
	const char __user *path;
	int ret;

	if (unlikely(req->flags & REQ_F_FIXED_FILE))
		return -EBADF;

	ret = __io_setxattr_prep(req, sqe);
	if (ret)
		return ret;
/*
 * io_fsetxattr_prep - TODO: Describe what this function does.
 * @param struct io_kiocb *req
 * @param const struct io_uring_sqe *sqe
 * @return TODO: Return value description.
 */

	path = u64_to_user_ptr(READ_ONCE(sqe->addr3));

	ix->filename = getname(path);
/*
 * io_fsetxattr - TODO: Describe what this function does.
 * @param struct io_kiocb *req
 * @param unsigned int issue_flags
 * @return TODO: Return value description.
 */
	if (IS_ERR(ix->filename))
		return PTR_ERR(ix->filename);

	return 0;
}

int io_fsetxattr_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe)
{
	return __io_setxattr_prep(req, sqe);
}

/*
 * io_setxattr - TODO: Describe what this function does.
 * @param struct io_kiocb *req
 * @param unsigned int issue_flags
 * @return TODO: Return value description.
 */
int io_fsetxattr(struct io_kiocb *req, unsigned int issue_flags)
{
	struct io_xattr *ix = io_kiocb_to_cmd(req, struct io_xattr);
	int ret;

	WARN_ON_ONCE(issue_flags & IO_URING_F_NONBLOCK);

	ret = file_setxattr(req->file, &ix->ctx);
	io_xattr_finish(req, ret);
	return IOU_OK;
}

int io_setxattr(struct io_kiocb *req, unsigned int issue_flags)
{
	struct io_xattr *ix = io_kiocb_to_cmd(req, struct io_xattr);
	int ret;

	WARN_ON_ONCE(issue_flags & IO_URING_F_NONBLOCK);

	ret = filename_setxattr(AT_FDCWD, ix->filename, LOOKUP_FOLLOW, &ix->ctx);
	ix->filename = NULL;
	io_xattr_finish(req, ret);
	return IOU_OK;
}

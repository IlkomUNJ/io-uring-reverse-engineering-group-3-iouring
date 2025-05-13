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

/**
 * io_xattr_cleanup - Cleanup function for extended attribute requests.
 * @req: Pointer to the io_kiocb representing the request.
 *
 * This function releases memory and resources allocated for an extended
 * attribute (xattr) request. If a filename was allocated, it is freed
 * using `putname()`. The kernel name and value buffers in the xattr context
 * are also freed appropriately.
 */
void io_xattr_cleanup(struct io_kiocb *req)
{
	struct io_xattr *ix = io_kiocb_to_cmd(req, struct io_xattr);

	if (ix->filename)
		putname(ix->filename);

	kfree(ix->ctx.kname);
	kvfree(ix->ctx.kvalue);
}

/**
 * io_xattr_finish - Finalizes an extended attribute request.
 * @req: Pointer to the io_kiocb representing the request.
 * @ret: Result code to be set for the request.
 *
 * Clears the cleanup flag, releases any resources associated with the
 * extended attribute request by calling `io_xattr_cleanup()`, and sets
 * the result value for the request using `io_req_set_res()`.
 */
static void io_xattr_finish(struct io_kiocb *req, int ret)
{
	req->flags &= ~REQ_F_NEED_CLEANUP;

	io_xattr_cleanup(req);
	io_req_set_res(req, ret, 0);
}

/**
 * __io_getxattr_prep - Prepare a getxattr (get extended attribute) request.
 * @req: Pointer to the io_kiocb representing the request.
 * @sqe: Submission queue entry containing user-provided parameters.
 *
 * This function sets up the internal state for a getxattr request. It converts
 * user-space pointers to kernel-space, allocates memory for the attribute name,
 * and imports it. The function also sets necessary flags indicating that the
 * request needs cleanup and should be forced asynchronous.
 *
 * Return: 0 on success, -EINVAL if unsupported flags are used, or -ENOMEM on
 * memory allocation failure. Also propagates errors from name import.
 */
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
	req->flags |= REQ_F_FORCE_ASYNC;
	return 0;
}

/**
 * io_fgetxattr_prep - Prepare an fgetxattr (file descriptor based) request.
 * @req: The io_kiocb representing the request.
 * @sqe: The submission queue entry with user-provided parameters.
 *
 * This function delegates preparation of the xattr request to
 * __io_getxattr_prep(), which handles common setup steps.
 *
 * Return: 0 on success or a negative error code.
 */
int io_fgetxattr_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe)
{
	return __io_getxattr_prep(req, sqe);
}

/**
 * io_getxattr_prep - Prepare a getxattr request using a pathname.
 * @req: The io_kiocb representing the request.
 * @sqe: The submission queue entry with user-provided parameters.
 *
 * Prepares an xattr read operation using a filename path instead of a file
 * descriptor. Imports the attribute name and the filename from userspace.
 * Rejects fixed file mode requests.
 *
 * Return: 0 on success or a negative error code on failure.
 */
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
	
	if (IS_ERR(ix->filename))
		return PTR_ERR(ix->filename);

	return 0;
}

/**
 * io_fgetxattr - Issue an fgetxattr operation.
 * @req: The io_kiocb representing the request.
 * @issue_flags: Flags controlling the issue behavior (must not include NONBLOCK).
 *
 * Executes the xattr read operation using a file descriptor. The result is
 * finalized using io_xattr_finish().
 *
 * Return: IOU_OK on completion.
 */
int io_fgetxattr(struct io_kiocb *req, unsigned int issue_flags)
{
	struct io_xattr *ix = io_kiocb_to_cmd(req, struct io_xattr);
	int ret;

	WARN_ON_ONCE(issue_flags & IO_URING_F_NONBLOCK);

	ret = file_getxattr(req->file, &ix->ctx);
	io_xattr_finish(req, ret);
	return IOU_OK;
}

/**
 * io_getxattr - Issue a getxattr operation using a filename.
 * @req: The io_kiocb representing the request.
 * @issue_flags: Flags controlling the issue behavior (must not include NONBLOCK).
 *
 * Executes the xattr read operation on a file specified by its pathname.
 * Uses @filename previously fetched in the prep step. Result is finalized
 * with io_xattr_finish().
 *
 * Return: IOU_OK on completion.
 */
int io_getxattr(struct io_kiocb *req, unsigned int issue_flags)
{
	struct io_xattr *ix = io_kiocb_to_cmd(req, struct io_xattr);
	int ret;


	WARN_ON_ONCE(issue_flags & IO_URING_F_NONBLOCK);

	ret = filename_getxattr(AT_FDCWD, ix->filename, LOOKUP_FOLLOW, &ix->ctx);
	ix->filename = NULL;
	io_xattr_finish(req, ret);
	return IOU_OK;
}

/**
 * __io_setxattr_prep - Prepare a setxattr (write extended attribute) request.
 * @req: The io_kiocb representing the request.
 * @sqe: The submission queue entry with user parameters.
 *
 * Allocates kernel memory for the xattr name, copies the user-provided
 * name and value, and populates the context struct for setxattr operation.
 * Marks the request as requiring cleanup and forces async execution.
 *
 * Return: 0 on success, or negative error code on failure.
 */
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
/
		kfree(ix->ctx.kname);
		return ret;
	}

	req->flags |= REQ_F_NEED_CLEANUP;
	req->flags |= REQ_F_FORCE_ASYNC;
	return 0;
}

/**
 * io_setxattr_prep - Prepare a setxattr request using a file path.
 * @req: The io_kiocb representing the request.
 * @sqe: The submission queue entry containing user parameters.
 *
 * Prepares an extended attribute write request on a path-based file.
 * Rejects fixed file mode. Converts user-provided name and value, and
 * fetches the target file path.
 *
 * Return: 0 on success or a negative error code on failure.
 */
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

	path = u64_to_user_ptr(READ_ONCE(sqe->addr3));

	ix->filename = getname(path);

	if (IS_ERR(ix->filename))
		return PTR_ERR(ix->filename);

	return 0;
}

/**
 * io_fsetxattr_prep - Prepare a setxattr request using a file descriptor.
 * @req: The io_kiocb representing the request.
 * @sqe: The submission queue entry with user parameters.
 *
 * Prepares a file descriptor-based extended attribute write request.
 * Delegates common setup to __io_setxattr_prep().
 *
 * Return: 0 on success or a negative error code.
 */
int io_fsetxattr_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe)
{
	return __io_setxattr_prep(req, sqe);
}

/**
 * io_fsetxattr - Issue a file-descriptor-based setxattr operation.
 * @req: The io_kiocb representing the request.
 * @issue_flags: Flags passed during issuing (must not include NONBLOCK).
 *
 * Executes an xattr set operation on a file referenced by descriptor.
 * Finalizes the request with io_xattr_finish().
 *
 * Return: IOU_OK on successful completion.
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

/**
 * io_setxattr - Issue a setxattr operation using a filename path.
 * @req: The io_kiocb representing the request.
 * @issue_flags: Flags passed during issuing (must not include NONBLOCK).
 *
 * Performs an xattr write on a file specified by its pathname.
 * The path is provided during preparation. Cleans up state and
 * finalizes with io_xattr_finish().
 *
 * Return: IOU_OK on success.
 */
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

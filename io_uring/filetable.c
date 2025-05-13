// SPDX-License-Identifier: GPL-2.0
#include <linux/kernel.h>
#include <linux/errno.h>
#include <linux/file.h>
#include <linux/mm.h>
#include <linux/slab.h>
#include <linux/nospec.h>
#include <linux/io_uring.h>

#include <uapi/linux/io_uring.h>

#include "io_uring.h"
#include "rsrc.h"
#include "filetable.h"

/**
 * io_file_bitmap_get - Find an available file slot index from bitmap
 * @ctx: io_uring ring context
 *
 * Searches the file bitmap for a free slot, respecting the allocation range
 * and hint. Returns slot index if found, -ENFILE if full.
 */
static int io_file_bitmap_get(struct io_ring_ctx *ctx)
{
	struct io_file_table *table = &ctx->file_table;
	unsigned long nr = ctx->file_alloc_end;
	int ret;

	if (!table->bitmap)
		return -ENFILE;

	do {
		ret = find_next_zero_bit(table->bitmap, nr, table->alloc_hint);
		if (ret != nr)
			return ret;

		if (table->alloc_hint == ctx->file_alloc_start)
			break;
		nr = table->alloc_hint;
		table->alloc_hint = ctx->file_alloc_start;
	} while (1);

	return -ENFILE;
}

/**
 * io_alloc_file_tables - Allocate file slot bitmap and resource data
 * @ctx: io_uring ring context
 * @table: file table structure to initialize
 * @nr_files: number of file slots to allocate
 *
 * Allocates memory for file resource tracking. Returns true on success.
 */
bool io_alloc_file_tables(struct io_ring_ctx *ctx, struct io_file_table *table,
			  unsigned nr_files)
{
	if (io_rsrc_data_alloc(&table->data, nr_files))
		return false;
	table->bitmap = bitmap_zalloc(nr_files, GFP_KERNEL_ACCOUNT);
	if (table->bitmap)
		return true;
	io_rsrc_data_free(ctx, &table->data);
	return false;
}

/**
 * io_free_file_tables - Free file resource table and bitmap
 * @ctx: io_uring context
 * @table: file table to release
 *
 * Frees the bitmap and associated file resource data.
 */
void io_free_file_tables(struct io_ring_ctx *ctx, struct io_file_table *table)
{
	io_rsrc_data_free(ctx, &table->data);
	bitmap_free(table->bitmap);
	table->bitmap = NULL;
}

/**
 * io_install_fixed_file - Install file into fixed file slot
 * @ctx: io_uring ring context
 * @file: file pointer to install
 * @slot_index: index in fixed file table
 *
 * Places a file into a fixed slot, allocating and resetting resource nodes
 * as needed. Returns 0 on success, or error on invalid index or allocation failure.
 */
static int io_install_fixed_file(struct io_ring_ctx *ctx, struct file *file,
				 u32 slot_index)
	__must_hold(&req->ctx->uring_lock)
{
	struct io_rsrc_node *node;

	if (io_is_uring_fops(file))
		return -EBADF;
	if (!ctx->file_table.data.nr)
		return -ENXIO;
	if (slot_index >= ctx->file_table.data.nr)
		return -EINVAL;

	node = io_rsrc_node_alloc(ctx, IORING_RSRC_FILE);
	if (!node)
		return -ENOMEM;

	if (!io_reset_rsrc_node(ctx, &ctx->file_table.data, slot_index))
		io_file_bitmap_set(&ctx->file_table, slot_index);

	ctx->file_table.data.nodes[slot_index] = node;
	io_fixed_file_set(node, file);
	return 0;
}

/**
 * __io_fixed_fd_install - Internal file install logic with optional slot allocation
 * @ctx: io_uring context
 * @file: file pointer to install
 * @file_slot: slot index or IORING_FILE_INDEX_ALLOC
 *
 * If file_slot is IORING_FILE_INDEX_ALLOC, finds a free slot.
 * Returns file slot index on success or negative error code.
 */
int __io_fixed_fd_install(struct io_ring_ctx *ctx, struct file *file,
			  unsigned int file_slot)
{
	bool alloc_slot = file_slot == IORING_FILE_INDEX_ALLOC;
	int ret;

	if (alloc_slot) {
		ret = io_file_bitmap_get(ctx);
		if (unlikely(ret < 0))
			return ret;
		file_slot = ret;
	} else {
		file_slot--;
	}

	ret = io_install_fixed_file(ctx, file, file_slot);
	if (!ret && alloc_slot)
		ret = file_slot;
	return ret;
}
/**
 * io_fixed_fd_install - Install file into fixed table with locking
 * @req: io_kiocb request
 * @issue_flags: issue-time flags
 * @file: file to install
 * @file_slot: slot to use or IORING_FILE_INDEX_ALLOC
 *
 * Wraps __io_fixed_fd_install with locking. If error occurs,
 * calls fput() on the file.
 *
 * Returns slot number or negative error.
 */
int io_fixed_fd_install(struct io_kiocb *req, unsigned int issue_flags,
			struct file *file, unsigned int file_slot)
{
	struct io_ring_ctx *ctx = req->ctx;
	int ret;

	io_ring_submit_lock(ctx, issue_flags);
	ret = __io_fixed_fd_install(ctx, file, file_slot);
	io_ring_submit_unlock(ctx, issue_flags);

	if (unlikely(ret < 0))
		fput(file);
	return ret;
}
/**
 * io_fixed_fd_remove - Remove a file from fixed table
 * @ctx: io_uring context
 * @offset: file table index to remove
 *
 * Frees and clears file at the given fixed file index.
 * Returns 0 on success, or error if slot is invalid or empty.
 */
int io_fixed_fd_remove(struct io_ring_ctx *ctx, unsigned int offset)
{
	struct io_rsrc_node *node;

	if (unlikely(!ctx->file_table.data.nr))
		return -ENXIO;
	if (offset >= ctx->file_table.data.nr)
		return -EINVAL;

	node = io_rsrc_node_lookup(&ctx->file_table.data, offset);
	if (!node)
		return -EBADF;
	io_reset_rsrc_node(ctx, &ctx->file_table.data, offset);
	io_file_bitmap_clear(&ctx->file_table, offset);
	return 0;
}

/**
 * io_register_file_alloc_range - Set valid file allocation range
 * @ctx: io_uring context
 * @arg: user pointer to file index range struct
 *
 * Sets the range of valid indices for file registration.
 * Returns 0 on success, negative error code otherwise.
 */
int io_register_file_alloc_range(struct io_ring_ctx *ctx,
				 struct io_uring_file_index_range __user *arg)
{
	struct io_uring_file_index_range range;
	u32 end;

	if (copy_from_user(&range, arg, sizeof(range)))
		return -EFAULT;
	if (check_add_overflow(range.off, range.len, &end))
		return -EOVERFLOW;
	if (range.resv || end > ctx->file_table.data.nr)
		return -EINVAL;

	io_file_table_set_alloc_range(ctx, range.off, range.len);
	return 0;
}

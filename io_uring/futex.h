// SPDX-License-Identifier: GPL-2.0

#include "cancel.h"

int io_futex_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe);
int io_futexv_prep(struct io_kiocb *req, const struct io_uring_sqe *sqe);
int io_futex_wait(struct io_kiocb *req, unsigned int issue_flags);
int io_futexv_wait(struct io_kiocb *req, unsigned int issue_flags);
int io_futex_wake(struct io_kiocb *req, unsigned int issue_flags);

#if defined(CONFIG_FUTEX)
int io_futex_cancel(struct io_ring_ctx *ctx, struct io_cancel_data *cd,
		    unsigned int issue_flags);
bool io_futex_remove_all(struct io_ring_ctx *ctx, struct io_uring_task *tctx,
			 bool cancel_all);
bool io_futex_cache_init(struct io_ring_ctx *ctx);
void io_futex_cache_free(struct io_ring_ctx *ctx);
#else
/*
 * io_futex_cancel - TODO: Describe what this function does.
 * @param struct io_ring_ctx *ctx
 * @param struct io_cancel_data *cd
 * @param unsigned int issue_flags
 * @return TODO: Return value description.
 */
static inline int io_futex_cancel(struct io_ring_ctx *ctx,
				  struct io_cancel_data *cd,
				  unsigned int issue_flags)
{
	return 0;
/*
 * io_futex_remove_all - TODO: Describe what this function does.
 * @param struct io_ring_ctx *ctx
 * @param struct io_uring_task *tctx
 * @param bool cancel_all
 * @return TODO: Return value description.
 */
}
static inline bool io_futex_remove_all(struct io_ring_ctx *ctx,
				       struct io_uring_task *tctx, bool cancel_all)
{
/*
 * io_futex_cache_init - TODO: Describe what this function does.
 * @param struct io_ring_ctx *ctx
 * @return TODO: Return value description.
 */
	return false;
}
static inline bool io_futex_cache_init(struct io_ring_ctx *ctx)
/*
 * io_futex_cache_free - TODO: Describe what this function does.
 * @param struct io_ring_ctx *ctx
 * @return TODO: Return value description.
 */
{
	return false;
}
static inline void io_futex_cache_free(struct io_ring_ctx *ctx)
{
}
#endif

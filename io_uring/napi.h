/* SPDX-License-Identifier: GPL-2.0 */

#ifndef IOU_NAPI_H
#define IOU_NAPI_H

#include <linux/kernel.h>
#include <linux/io_uring.h>
#include <net/busy_poll.h>
/*
    Implementation of the functions depend on whether CONFIG_NET_RX_BUSY_POLL
    is enable in the kernel config.
*/
#ifdef CONFIG_NET_RX_BUSY_POLL

void io_napi_init(struct io_ring_ctx *ctx);
void io_napi_free(struct io_ring_ctx *ctx);

int io_register_napi(struct io_ring_ctx *ctx, void __user *arg);
int io_unregister_napi(struct io_ring_ctx *ctx, void __user *arg);

int __io_napi_add_id(struct io_ring_ctx *ctx, unsigned int napi_id);

void __io_napi_busy_loop(struct io_ring_ctx *ctx, struct io_wait_queue *iowq);
int io_napi_sqpoll_busy_poll(struct io_ring_ctx *ctx);
/*
    When the flag is defined, checks if NAPI integration is currently
    active and configured for the given io_uring context.
    Returns true If NAPI tracking is active for this context
    (i.e., NAPI instances are registered); false otherwise.
*/
static inline bool io_napi(struct io_ring_ctx *ctx)
{
	return !list_empty(&ctx->napi_list);
}
/*
    Initiates a NAPI busy polling loop if NAPI is active for the context.
*/
static inline void io_napi_busy_loop(struct io_ring_ctx *ctx,
				     struct io_wait_queue *iowq)
{
	if (!io_napi(ctx))
		return;
	__io_napi_busy_loop(ctx, iowq);
}
/*
    Dynamically adds the NAPI ID associated with a network socket
    (from an I/O request) to the io_uring context's NAPI tracking list.
*/
static inline void io_napi_add(struct io_kiocb *req)
{
	struct io_ring_ctx *ctx = req->ctx;
	struct socket *sock;

	if (READ_ONCE(ctx->napi_track_mode) != IO_URING_NAPI_TRACKING_DYNAMIC)
		return;

	sock = sock_from_file(req->file);
	if (sock && sock->sk)
		__io_napi_add_id(ctx, READ_ONCE(sock->sk->sk_napi_id));
}

#else
/* When the flag is disabled, these two functions do nothing. */
static inline void io_napi_init(struct io_ring_ctx *ctx)
{
}
static inline void io_napi_free(struct io_ring_ctx *ctx)
{
}
// When the flag is disabled, these two functions return -EOPNOTSUPP
// (operation not supported).
static inline int io_register_napi(struct io_ring_ctx *ctx, void __user *arg)
{
	return -EOPNOTSUPP;
}
static inline int io_unregister_napi(struct io_ring_ctx *ctx, void __user *arg)
{
	return -EOPNOTSUPP;
}
/* When the flag is disabled, this returns false */
static inline bool io_napi(struct io_ring_ctx *ctx)
{
	return false;
}
/* When the flag is disabled, these two functions do nothing. */
static inline void io_napi_add(struct io_kiocb *req)
{
}
static inline void io_napi_busy_loop(struct io_ring_ctx *ctx,
				     struct io_wait_queue *iowq)
{
}
/* When the flag is disabled, returns 0. */
static inline int io_napi_sqpoll_busy_poll(struct io_ring_ctx *ctx)
{
	return 0;
}
#endif /* CONFIG_NET_RX_BUSY_POLL */

#endif

#ifndef IOU_REQ_REF_H
#define IOU_REQ_REF_H

#include <linux/atomic.h>
#include <linux/io_uring_types.h>

/*
 * Shamelessly stolen from the mm implementation of page reference checking,
 * see commit f958d7b528b1 for details.
 */
#define req_ref_zero_or_close_to_overflow(req)	\
	((unsigned int) atomic_read(&(req->refs)) + 127u <= 127u)

/*
    Atomically increments the reference count req->refs if and only if
    it is not already zero.
    Returns false when req->refs is already zero, and true if
    req->refs is non-zero.
*/
static inline bool req_ref_inc_not_zero(struct io_kiocb *req)
{
	WARN_ON_ONCE(!(req->flags & REQ_F_REFCOUNT));
	return atomic_inc_not_zero(&req->refs);
}

/*
    Atomically decrements the reference count req->refs and tests if
    the count has reached zero as a result.
    Returns true if req->refs becomes zero post-decrement, false otherwise.
*/
static inline bool req_ref_put_and_test_atomic(struct io_kiocb *req)
{
	WARN_ON_ONCE(!(data_race(req->flags) & REQ_F_REFCOUNT));
	WARN_ON_ONCE(req_ref_zero_or_close_to_overflow(req));
	return atomic_dec_and_test(&req->refs);
}
/*
    Decrements the reference count and tests if it's zero. However, it has a
    fast path for requests that are not reference-counted.
*/
static inline bool req_ref_put_and_test(struct io_kiocb *req)
{
	if (likely(!(req->flags & REQ_F_REFCOUNT)))
		return true;

	WARN_ON_ONCE(req_ref_zero_or_close_to_overflow(req));
	return atomic_dec_and_test(&req->refs);
}
/*
    Increments the reference count req->refs; used when a new reference to
    the io_kiocb is being taken.
*/
static inline void req_ref_get(struct io_kiocb *req)
{
	WARN_ON_ONCE(!(req->flags & REQ_F_REFCOUNT));
	WARN_ON_ONCE(req_ref_zero_or_close_to_overflow(req));
	atomic_inc(&req->refs);
}
/*
    Decrements the reference count req->refs. Unlike req_ref_put_and_test,
    this function does not return whether the count reached zero.
*/
static inline void req_ref_put(struct io_kiocb *req)
{
	WARN_ON_ONCE(!(req->flags & REQ_F_REFCOUNT));
	WARN_ON_ONCE(req_ref_zero_or_close_to_overflow(req));
	atomic_dec(&req->refs);
}
/*
    Initializes the reference count for an io_kiocb.
    Enables refcounting for the request if not already enabled and sets
    the count to nr.
*/
static inline void __io_req_set_refcount(struct io_kiocb *req, int nr)
{
	if (!(req->flags & REQ_F_REFCOUNT)) {
		req->flags |= REQ_F_REFCOUNT;
		atomic_set(&req->refs, nr);
	}
}
/*
    A convenience wrapper for __io_req_set_refcount to initialize the
    reference count of an io_kiocb to 1.
*/
static inline void io_req_set_refcount(struct io_kiocb *req)
{
	__io_req_set_refcount(req, 1);
}
#endif

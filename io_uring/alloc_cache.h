#ifndef IOU_ALLOC_CACHE_H
#define IOU_ALLOC_CACHE_H

#include <linux/io_uring_types.h>

/*
 * Don't allow the cache to grow beyond this size.
 */
#define IO_ALLOC_CACHE_MAX	128

void io_alloc_cache_free(struct io_alloc_cache *cache,
			 void (*free)(const void *));
bool io_alloc_cache_init(struct io_alloc_cache *cache,
			 unsigned max_nr, unsigned int size,
			 unsigned int init_bytes);

void *io_cache_alloc_new(struct io_alloc_cache *cache, gfp_t gfp);
/*
 * io_alloc_cache_put - TODO: Describe what this function does.
 * @param struct io_alloc_cache *cache
 * @param void *entry
 * @return TODO: Return value description.
 */

/*
    pushes a new entry to a given cache array.
    returns true if object is successfully put,
    false if cache is full or KASAN poisoning fails.
*/
static inline bool io_alloc_cache_put(struct io_alloc_cache *cache,
				      void *entry)
{
	if (cache->nr_cached < cache->max_cached) {
		if (!kasan_mempool_poison_object(entry))
			return false;
		cache->entries[cache->nr_cached++] = entry;
		return true;
	}
	return false;
}
/*
    pops an entry to a given cache array if available. also unpoisons
    and optionally zeroes the first bytes under KASAN.
*/
static inline void *io_alloc_cache_get(struct io_alloc_cache *cache)
{
	if (cache->nr_cached) {
		void *entry = cache->entries[--cache->nr_cached];

		/*
		 * If KASAN is enabled, always clear the initial bytes that
		 * must be zeroed post alloc, in case any of them overlap
		 * with KASAN storage.
		 */
#if defined(CONFIG_KASAN)
		kasan_mempool_unpoison_object(entry, cache->elem_size);
		if (cache->init_clear)
			memset(entry, 0, cache->init_clear);
#endif
		return entry;
	}

	return NULL;
}

/*
    convenience wrapper for calling io_alloc_cache_get and falls back to kmalloc()
    (called through io_cache_alloc_new) if the function fails.
*/
static inline void *io_cache_alloc(struct io_alloc_cache *cache, gfp_t gfp)
{
	void *obj;

	obj = io_alloc_cache_get(cache);
	if (obj)
		return obj;
	return io_cache_alloc_new(cache, gfp);
/*
 * io_cache_free - TODO: Describe what this function does.
 * @param struct io_alloc_cache *cache
 * @param void *obj
 * @return TODO: Return value description.
 */
}

/*
    convenience wrapper for calling io_alloc_cache_put and falls back to
    kfree() if cache is full.
*/
static inline void io_cache_free(struct io_alloc_cache *cache, void *obj)
{
	if (!io_alloc_cache_put(cache, obj))
		kfree(obj);
}

#endif

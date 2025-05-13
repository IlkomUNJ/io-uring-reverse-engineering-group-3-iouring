// SPDX-License-Identifier: GPL-2.0

#include "alloc_cache.h"
/**
 * io_alloc_cache_free - Frees all objects in the allocation cache
 * @cache: pointer to the io_alloc_cache structure
 * @free: callback function used to free each individual entry
 *
 * Iterates through the internal cache and frees all objects using the provided
 * callback. Finally, deallocates the entry array itself.
 */
void io_alloc_cache_free(struct io_alloc_cache *cache,
			 void (*free)(const void *))
{
	void *entry;

	if (!cache->entries)
		return;

	while ((entry = io_alloc_cache_get(cache)) != NULL)
		free(entry);

	kvfree(cache->entries);
	cache->entries = NULL;
}
/**
 * io_alloc_cache_init - Initializes the allocation cache
 * @cache: pointer to the io_alloc_cache structure to initialize
 * @max_nr: maximum number of elements that can be cached
 * @size: size of each cached object
 * @init_bytes: number of bytes to clear in each new object
 *
 * Allocates memory for internal cache storage and sets initial values.
/* returns false if the cache was initialized properly */
bool io_alloc_cache_init(struct io_alloc_cache *cache,
			 unsigned max_nr, unsigned int size,
			 unsigned int init_bytes)
{
	cache->entries = kvmalloc_array(max_nr, sizeof(void *), GFP_KERNEL);
	if (!cache->entries)
		return true;

	cache->nr_cached = 0;
	cache->max_cached = max_nr;
	cache->elem_size = size;
	cache->init_clear = init_bytes;
	return false;
}
/**
 * io_cache_alloc_new - Allocates a new object for the cache
 * @cache: pointer to the io_alloc_cache structure
 * @gfp: allocation flags (e.g., GFP_KERNEL)
 *
 * Allocates a new object of the requested size using kmalloc.
 * If @init_clear is set, clears the allocated memory up to init_clear bytes.
 */
void *io_cache_alloc_new(struct io_alloc_cache *cache, gfp_t gfp)
{
	void *obj;

	obj = kmalloc(cache->elem_size, gfp);
	if (obj && cache->init_clear)
		memset(obj, 0, cache->init_clear);
	return obj;
}

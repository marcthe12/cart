#pragma once
#ifndef CALT_ALLOC_H
#define CALT_ALLOC_H
#include <stddef.h>

struct calt_alloc {
	void *(*malloc)(size_t);
	void *(*calloc)(size_t);
	void *(*realloc)(void *, size_t);
	void (*free)(void *);
};

extern struct calt_alloc calt_get_alloc(void);
extern void calt_use_custom_alloc(struct calt_alloc allocator);

inline void *calt_malloc(size_t size) {
	if (size) {
		struct calt_alloc alloc = calt_get_alloc();
		return alloc.malloc ? alloc.malloc(size) : NULL;
	} else {
		return NULL;
	}
}

inline void calt_free(void *ptr) {
	if (ptr) {
		calt_get_alloc().free(ptr);
	}
}

extern void *calt_calloc(size_t size);
extern void *calt_realloc(void *ptr, size_t size);
extern void *calt_memdup(void const *restrict src, size_t len);

#endif

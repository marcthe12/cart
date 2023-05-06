/*
 * Copyright (c) 2023 Marc Pervaz Boocha
 *
 * SPDX-License-Identifier: MIT
 */

#include <alloc.h>
#include <mem.h>

void *calt_realloc(void *ptr, size_t size) {
	if (size) {
		struct calt_alloc alloc = calt_get_alloc();
		if (alloc.realloc) {
			return alloc.realloc(ptr, size);
		} else {
			void *new = calt_malloc(size);
			if (new && (ptr)) {
				calt_memcpy(new, ptr, size);
				calt_free(ptr);
			}
			return new;
		}
	} else {
		calt_free(ptr);
		return NULL;
	}
}


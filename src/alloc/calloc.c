/*
 * Copyright (c) 2023 Marc Pervaz Boocha
 *
 * SPDX-License-Identifier: MIT
 */

#include <alloc.h>
#include <mem.h>

void *calt_calloc(size_t size) {
	if (size) {
		struct calt_alloc alloc = calt_get_alloc();
		return alloc.calloc ? alloc.calloc(size)
				    : calt_memzero_null(calt_malloc(size), size);
	} else {
		return NULL;
	}
}


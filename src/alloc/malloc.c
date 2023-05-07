/*
 * Copyright (c) 2023 Marc Pervaz Boocha
 *
 * SPDX-License-Identifier: MIT
 */

#include <alloc.h>

void *calt_malloc(size_t size) {
	if (size) {
		struct calt_alloc alloc = calt_get_alloc();
		return alloc.malloc ? alloc.malloc(size) : NULL;
	} else {
		return NULL;
	}
}

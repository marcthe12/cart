/*
 * Copyright (c) 2023 Marc Pervaz Boocha
 *
 * SPDX-License-Identifier: MIT
 */

#include <mem.h>
void *calt_memcpy(void *restrict dest, const void *restrict src,
		       size_t count) {
	unsigned char *d = dest;
	unsigned char const *s = src;

	while (count-- > 0) {
		*d++ = *s++;
	}

	return dest;
}


void *calt_memcpy_null(void *restrict dest, void const *restrict src,
			    size_t count) {
	return dest ? calt_memcpy(dest, src, count) : NULL;
}


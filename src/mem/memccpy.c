/*
 * Copyright (c) 2023 Marc Pervaz Boocha
 *
 * SPDX-License-Identifier: MIT
 */

#include <mem.h>

void *calt_memccpy(void *restrict dest, void const *restrict src, unsigned char value,
		 size_t size) {
	unsigned char *d = dest;
	unsigned char const *s = src;

	while (size-- > 0) {
		*d++ = *s;
		if (*s++ == value) {
			return d;
		}
	}

	return NULL;
}

void *calt_memccpy_null(void *restrict dest, void const *restrict src,
			     unsigned char value, size_t count) {
	return dest ? calt_memccpy(dest, src, value, count) : NULL;
}

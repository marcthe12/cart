/*
 * Copyright (c) 2023 Marc Pervaz Boocha
 *
 * SPDX-License-Identifier: MIT
 */

#include <mem.h>

void *calt_memmove(void *dest, void const *src, size_t count) {
	unsigned char *d = dest;
	unsigned char const *s = src;

	if (d > s) {
		d += count;
		s += count;
		while (count-- > 0) {
			*--d = *--s;
		}
	} else if (d < s) {
		calt_memcpy(dest, src, count);
	}

	return dest;
}

void *calt_memmove_null(void *dest, void const *src, size_t count) {
	return dest ? calt_memmove(dest, src, count) : NULL;
}


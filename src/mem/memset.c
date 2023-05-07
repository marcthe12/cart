/*
 * Copyright (c) 2023 Marc Pervaz Boocha
 *
 * SPDX-License-Identifier: MIT
 */

#include <mem.h>

void *calt_memset(void *restrict dest, unsigned char value, size_t count) {
	unsigned char *p = dest;

	while (count-- > 0) {
		*p++ = value;
	}

	return dest;
}

void *calt_memset_null(void *dest, unsigned char value, size_t count) {
	return dest ? calt_memset(dest, value, count) : NULL;
}



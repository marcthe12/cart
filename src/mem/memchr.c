/*
 * Copyright (c) 2023 Marc Pervaz Boocha
 *
 * SPDX-License-Identifier: MIT
 */

#include <mem.h>

void *calt_memchr(void const *ptr, unsigned char value, size_t count) {
	unsigned char const *p = ptr;

	while (count-- > 0) {
		if (*p == value) {
			return (void *)p;
		}
		p++;
	}

	return NULL;
}

/*
 * Copyright (c) 2023 Marc Pervaz Boocha
 *
 * SPDX-License-Identifier: MIT
 */

#include <mem.h>

void *calt_memrchr(void const *ptr, unsigned char value, size_t count) {
	unsigned char const *p = ptr;
	p = p + count;

	while (count > 0) {
		if (*(--p) == value) {
			return (void *)p;
		}
	}

	return NULL;
}

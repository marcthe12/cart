/*
 * Copyright (c) 2023 Marc Pervaz Boocha
 *
 * SPDX-License-Identifier: MIT
 */

#include <mem.h>

void* calt_memrev(void *ptr, size_t size) {
	unsigned char *p1 = ptr;
	unsigned char *p2 = p1 + size - 1;
	while (p1 < p2) {
		unsigned char temp = *p1;
		*p1++ = *p2;
		*p2-- = temp;
	}
	return ptr;
}


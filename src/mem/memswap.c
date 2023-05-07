/*
 * Copyright (c) 2023 Marc Pervaz Boocha
 *
 * SPDX-License-Identifier: MIT
 */

#include <mem.h>

void calt_memswap(void *restrict ptr1, void *restrict ptr2, size_t size) {
	if(ptr1 == ptr2){
		return;
	}
	unsigned char *p1 = ptr1;
	unsigned char *p2 = ptr2;
	while (size-- > 0) {
		unsigned char temp = *p1;
		*p1++ = *p2;
		*p2++ = temp;
	}
}


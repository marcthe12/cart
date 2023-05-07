/*
 * Copyright (c) 2023 Marc Pervaz Boocha
 *
 * SPDX-License-Identifier: MIT
 */

#include <mem.h>

void *calt_memmem(void const *haystack, size_t haystacklen,
		       void const *needle, size_t needlelen) {
	unsigned char const *p = haystack;
	unsigned char const *end = p + haystacklen - needlelen;
	while (p <= end) {
		if (calt_memcmp(p, needle, needlelen) == 0) {
			return (void *)p;
		}
		p++;
	}
	return NULL;
}

/*
 * Copyright (c) 2023 Marc Pervaz Boocha
 *
 * SPDX-License-Identifier: MIT
 */

#include <mem.h>

void *calt_memzero(void *dest, size_t count) {
	return calt_memset(dest, '\0', count);
}

void *calt_memzero_null(void *dest, size_t count) {
	return dest ? calt_memzero(dest, count) : NULL;
}


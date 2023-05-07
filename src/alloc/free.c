/*
 * Copyright (c) 2023 Marc Pervaz Boocha
 *
 * SPDX-License-Identifier: MIT
 */

#include <alloc.h>

void calt_free(void *ptr) {
	if (ptr) {
		calt_get_alloc().free(ptr);
	}
}


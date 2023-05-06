/*
 * Copyright (c) 2023 Marc Pervaz Boocha
 *
 * SPDX-License-Identifier: MIT
 */

#include <mem.h>

extern inline void *calt_memcpy(void *restrict dest, void const *restrict src,
			      size_t count);


extern inline void *calt_memcpy_null(void *restrict dest, void const *restrict src,
			      size_t count);

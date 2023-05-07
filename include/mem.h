/*
 * Copyright (c) 2023 Marc Pervaz Boocha
 *
 * SPDX-License-Identifier: MIT
 */
#ifndef CALT_MEM_H
#define CALT_MEM_H
#include <stddef.h>


extern void *calt_memset(void *dest, unsigned char value, size_t count);
extern void *calt_memset_null(void *dest, unsigned char value, size_t count);
extern void *calt_memzero(void *restrict dest, size_t count);
extern void *calt_memzero_null(void *restrict dest, size_t count);
extern void *calt_memcpy(void *restrict dest, void const *restrict src,
			      size_t count);
extern void *calt_memcpy_null(void *restrict dest, void const *restrict src,
			      size_t count);

extern void *calt_memccpy(void *restrict dest, void const *restrict src,
			unsigned char value, size_t count);
extern void *calt_memccpy_null(void *restrict dest, void const *restrict src,
			     unsigned char value, size_t count);
extern void *calt_memmove(void *dest, void const *src, size_t count);
extern void *calt_memmove_null(void *dest, void const *src, size_t count);
extern void *calt_memchr(void const *ptr, unsigned char value, size_t count);
extern void *calt_memrchr(void const *ptr, unsigned char value, size_t count);
extern void *calt_memrchr(void const *ptr, unsigned char value, size_t count);
extern int calt_memcmp(void const *ptr1, void const *ptr2, size_t count);
extern void calt_memswap(void *restrict ptr1, void *restrict ptr2, size_t size);
extern size_t calt_memlen(void const *ptr, unsigned char value, size_t count);
extern size_t calt_memhash(void const *ptr, size_t count);
extern void *calt_memmem(void const *haystack, size_t haystacklen,
			      void const *needle, size_t needlelen);
extern void *calt_memrev(void *ptr, size_t size);
#endif

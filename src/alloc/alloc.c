/*
 * Copyright (c) 2023 Marc Pervaz Boocha
 *
 * SPDX-License-Identifier: MIT
 */

#include <alloc.h>
#include <stdlib.h>

static void* stdcalloc(size_t size){
    return calloc(1, size);
}

static void* stdmalloc(size_t size){
    return malloc(size);
}

static void* stdrealloc(void* ptr, size_t size){
    return realloc(ptr, size);
}

static void stdfree(void* ptr){
    free(ptr);
}


static struct calt_alloc alloc = {
    .malloc = stdmalloc, .realloc = stdrealloc, .free = stdfree, .calloc = stdcalloc};

void calt_use_custom_alloc(struct calt_alloc allocator) { alloc = allocator; }
struct calt_alloc calt_get_alloc(void) { return alloc; }


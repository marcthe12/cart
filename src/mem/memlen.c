/*
 * Copyright (c) 2023 Marc Pervaz Boocha
 *
 * SPDX-License-Identifier: MIT
 */

#include <mem.h>

size_t calt_memlen(void const* ptr, unsigned char value, size_t size) {
    unsigned char const *p = ptr;
    size_t len = 0;

    while (size-- > 0 && *p != value) {
        p++;
        len++;
    }

    return len;
}

#pragma once

#ifndef CALT_MEM_H
#define CALT_MEM_H
#include <stddef.h>

inline void *calt_memset(void *restrict dest, unsigned char value, size_t count) {
	unsigned char *p = dest;

	while (count-- > 0) {
		*p++ = value;
	}

	return dest;
}

inline void *calt_memset_null(void *dest, unsigned char value, size_t count) {
	return dest ? calt_memset(dest, value, count) : NULL;
}

inline void *calt_memzero(void *dest, size_t count) {
	return calt_memset(dest, '\0', count);
}

inline void *calt_memzero_null(void *dest, size_t count) {
	return dest ? calt_memzero(dest, count) : NULL;
}

inline void *calt_memcpy(void *restrict dest, const void *restrict src,
		       size_t count) {
	unsigned char *d = dest;
	unsigned char const *s = src;

	while (count-- > 0) {
		*d++ = *s++;
	}

	return dest;
}


inline void *calt_memcpy_null(void *restrict dest, void const *restrict src,
			    size_t count) {
	return dest ? calt_memcpy(dest, src, count) : NULL;
}

extern void *calt_memccpy(void *restrict dest, void const *restrict src,
			unsigned char value, size_t count);
inline void *calt_memccpy_null(void *restrict dest, void const *restrict src,
			     unsigned char value, size_t count) {
	return dest ? calt_memccpy(dest, src, value, count) : NULL;
}

inline void *calt_memmove(void *dest, void const *src, size_t count) {
	unsigned char *d = dest;
	unsigned char const *s = src;

	if (d > s) {
		d += count;
		s += count;
		while (count-- > 0) {
			*--d = *--s;
		}
	} else if (d < s) {
		calt_memcpy(dest, src, count);
	}

	return dest;
}

inline void *calt_memmove_null(void *dest, void const *src, size_t count) {
	return dest ? calt_memmove(dest, src, count) : NULL;
}

inline void *calt_memchr(void const *ptr, unsigned char value, size_t count) {
	unsigned char const *p = ptr;

	while (count-- > 0) {
		if (*p == value) {
			return (void *)p;
		}
		p++;
	}

	return NULL;
}

inline void *calt_memrchr(void const *ptr, unsigned char value, size_t count) {
	unsigned char const *p = ptr;
	p = p + count;

	while (count > 0) {
		if (*(--p) == value) {
			return (void *)p;
		}
	}

	return NULL;
}

inline int calt_memcmp(const void *ptr1, const void *ptr2, size_t count) {
	const unsigned char *p1 = ptr1;
	const unsigned char *p2 = ptr2;

	while (count-- > 0) {
		if (*p1 != *p2) {
			return (*p1 < *p2) ? -1 : 1;
		}
		p1++;
		p2++;
	}

	return 0;
}

inline void calt_memswap(void *restrict ptr1, void *restrict ptr2, size_t size) {
	unsigned char *p1 = ptr1;
	unsigned char *p2 = ptr2;
	while (size-- > 0) {
		unsigned char temp = *p1;
		*p1++ = *p2;
		*p2++ = temp;
	}
}

inline size_t calt_memlen(void const* ptr, unsigned char value, size_t size) {
    unsigned char const *p = ptr;
    size_t len = 0;

    while (size-- > 0 && *p != value) {
        p++;
        len++;
    }

    return len;
}

extern size_t calt_memhash(void const *ptr, size_t count);

inline void *calt_memmem(void const *haystack, size_t haystacklen,
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

inline void calt_memrev(void *ptr, size_t size) {
	unsigned char *p1 = ptr;
	unsigned char *p2 = p1 + size - 1;
	while (p1 < p2) {
		unsigned char temp = *p1;
		*p1++ = *p2;
		*p2-- = temp;
	}
}
#endif

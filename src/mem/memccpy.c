#include <mem.h>

void *calt_memccpy(void *restrict dest, void const *restrict src, unsigned char value,
		 size_t size) {
	unsigned char *d = dest;
	unsigned char const *s = src;

	while (size-- > 0) {
		*d++ = *s;
		if (*s++ == value) {
			return d;
		}
	}

	return NULL;
}

extern inline void *calt_memccpy_null(void *restrict dest,
				    void const *restrict src,
				    unsigned char value, size_t size);

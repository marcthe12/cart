#include <limits.h>
#include <stdint.h>
#include <mem.h>

size_t calt_memhash(const void *ptr, size_t count) {
	unsigned char const *p = ptr;
	size_t hash = 0;
	size_t const hash_bits = sizeof hash;
	while (count-- > 0) {
		hash ^= (size_t) * (p++) << count % hash_bits * CHAR_BIT;
	}
	return hash;
}

#include <alloc.h>
#include <mem.h>

void *calt_memdup(void const *restrict src, size_t len) {
	return calt_memcpy_null(calt_malloc(len), src, len);
}

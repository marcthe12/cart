#include <alloc.h>
#include <mem.h>

static char const src[] = "hello";

int main(void) {
	void *dest = calt_memdup(src, sizeof(src));
	int res = calt_memcmp(src, dest, sizeof(src)) == 0 ? 0 : 1;
	calt_free(dest);
	return res;
}

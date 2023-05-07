#include <mem.h>

static char src[] = "hello";

int main(void) {
	calt_memmove(src, src, sizeof(src));
	return calt_memcmp(src, "hello", sizeof(src)) == 0 ? 0 : 1;
}

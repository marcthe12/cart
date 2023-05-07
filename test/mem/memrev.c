#include <mem.h>

static char src[] = "abc";

int main(void) {
	return calt_memcmp(calt_memrev(src, 3), "cba", 3) == 0 ? 0 : 1;
}

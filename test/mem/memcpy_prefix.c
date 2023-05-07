#include <mem.h>

static char const src[] = "hello";
static char dest[sizeof(src)] = {0};

int main(void) {
	calt_memcpy(dest, src, 3);
	return calt_memcmp(src, dest, 3) == 0
		   ? calt_memcmp("\0\0\0", dest + 3, 3) == 0 ? 0 : 1
		   : 1;
}

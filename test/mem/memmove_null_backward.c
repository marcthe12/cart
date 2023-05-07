#include <mem.h>

static char buf[] = "hello world";

int main(void) {
	return calt_memcmp(calt_memmove(buf, buf + 6, 5), "world world",
			   sizeof buf - 1) == 0
		   ? 0
		   : 1;
}

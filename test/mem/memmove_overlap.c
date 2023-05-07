#include <mem.h>
#include <stdio.h>
#include <string.h>

static char buf[] = "hello world";

int main(void) {
	calt_memmove(buf + 1, buf + 2, 5);
	return calt_memcmp(buf, "hllo wworld",
			   sizeof buf - 1) == 0
		   ? 0
		   : 1;
}

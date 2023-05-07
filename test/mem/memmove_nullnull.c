#include <mem.h>
#include <stddef.h>

static char const src[] = "Hello World";

int main(void){
	return !calt_memmove_null(NULL, src, sizeof src) ? 0 : 1;
}

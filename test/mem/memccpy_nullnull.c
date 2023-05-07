#include <mem.h>
#include <stddef.h>

static char const src[] = "Hello World";

int main(void){
	return !calt_memccpy_null(NULL, src, 'e' ,sizeof src) ? 0 : 1;
}

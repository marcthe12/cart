#include <mem.h>
#include <stddef.h>

int main(void){
	return !calt_memzero_null(NULL, 10) ? 0 : 1;
}

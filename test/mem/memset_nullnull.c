#include <mem.h>
#include <stddef.h>

int main(void){
	return !calt_memset_null(NULL, 'A', 10) ? 0 : 1;
}

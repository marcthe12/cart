#include <mem.h>
#include <stddef.h>

static char buf[100];

int main(void){
	calt_memset_null(buf, 'A', sizeof buf);
	for(size_t i = 0; i < sizeof buf; i++){
		if('A' != buf[i]){
			return 1;
		}
	}
	return 0;
}

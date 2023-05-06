#include <calt.h>
#include <stddef.h>

static char buf[100];

int main(void){
	calt_memzero(buf, sizeof buf);
	for(size_t i = 0; i < sizeof buf; i++){
		if('\0' != buf[i]){
			return 1;
		}
	}
	return 0;
}

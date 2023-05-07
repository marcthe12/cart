#include <mem.h>

char const buf1[] = "hello";
char const buf2[] = "hello world";

int main(void) { return 0 == calt_memcmp(buf1, buf2, sizeof(buf1) - 1) ? 0 : 1; }

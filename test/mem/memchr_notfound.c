#include <mem.h>

static char const buf[] = "test";

int main(void) { return calt_memchr(buf, 'u', sizeof buf) == NULL ? 0 : 1; }

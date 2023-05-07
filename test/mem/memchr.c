#include <mem.h>

static char const buf[] = "test";

int main(void) { return calt_memchr(buf, 't', sizeof buf) == &buf[0] ? 0 : 1; }

#include <mem.h>

static char const buf[] = "test";

int main(void) { return calt_memrchr(buf, 't', sizeof buf) == &buf[3] ? 0 : 1; }

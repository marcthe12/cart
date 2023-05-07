#include <mem.h>

static char const buf[] = "test";

int main(void) { return calt_memrchr(buf, 'u', sizeof buf) == NULL ? 0 : 1; }

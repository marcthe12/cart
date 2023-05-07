#include <mem.h>

static char const buf[] = "Test";

int main(void) { return calt_memlen(buf, '\0', 3) == 3 ? 0 : 1; }

#include <mem.h>

static char const buf[] = "Test";

int main(void) { return calt_memlen(buf, '\0', sizeof buf) == 4 ? 0 : 1; }

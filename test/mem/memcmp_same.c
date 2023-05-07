#include <mem.h>

static char const buf1[] = "hello";
static char const buf2[] = "hello";

int main(void) {
  return calt_memcmp(buf1, buf2, sizeof(buf1)) == 0 ? 0 : 1;
}

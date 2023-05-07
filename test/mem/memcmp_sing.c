#include <mem.h>

static char const buf1[] = "hello";

int main(void) {
  return calt_memcmp(buf1, buf1, sizeof(buf1)) == 0 ? 0 : 1;
}

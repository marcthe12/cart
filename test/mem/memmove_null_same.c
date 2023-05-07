#include <mem.h>

static char const src[] = "hello";
static char dest[sizeof(src)] = { 0 };

int main(void) {
  calt_memmove_null(dest, src, sizeof(src));
  return calt_memcmp(src, dest, sizeof(src)) == 0 ? 0 : 1;
}

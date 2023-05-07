#include <mem.h>

int main(void) {
  return calt_memcmp(NULL, NULL, 10) == 0 ? 0 : 1;
}

#include <mem.h>

static int const a = 1;
static int const b = 2;

int main(void){
  int x = a;
  int y = b;
  calt_memswap(&x, &y, sizeof x);
  return x == b && y == a ? 0 : 1;
}

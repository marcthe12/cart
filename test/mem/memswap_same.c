#include <mem.h>

static int const a = 1;

int main(void){
  int x = a;
  calt_memswap(&x, &x, sizeof x);
  return x == a ? 0 : 1;
}

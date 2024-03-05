#include "stdio.h"
#include "stdlib.h"

int f() {}
int g() { return 69; }
int main(void) {
  auto long long int i = (f(), g());
  printf("%lld\n", i);
}

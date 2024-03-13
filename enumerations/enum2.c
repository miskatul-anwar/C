#include "stdio.h"

int main() {
  enum numbers { one = 1, two = 2, three = 3 };
  printf("%d %d %d\n", one, two, three);
  // only integers are allowed on enumeration
  return 0;
}

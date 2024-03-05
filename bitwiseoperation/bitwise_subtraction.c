#include "stdlib.h"
#include <stdio.h>
int main(int argc, char **argv) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  a = a ^ b;
  printf("a - b = %d\n", a);
  printf("a - b = %d\n", a);
  return 0;
}

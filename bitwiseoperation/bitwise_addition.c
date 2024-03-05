#include "stdlib.h"
#include <stdio.h>
int main(int argc, char **argv) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int result = a + b;
  printf("%d\n", result);
  a = a ^ b;
  printf("%d\n", result);
  return 0;
}

#include "stdio.h"
#include "stdlib.h"
void check(int n) {
  n % 2 == 0 ? ({
    goto even;
    0
  })
             : ({
                 goto odd;
                 0
               })even : printf("Even\n");
  return;
odd:
  printf("Odd\n");
}
int main(int argc, char **argv) {
  int n = atoi(argv[1]);
  check(n);
  return 0;
}

#include "stdio.h"
#include "stdlib.h"
void check(int n) {
  if (n % 2 == 0) {
    goto even;
  } else {
    goto odd;
  }
even:
  printf("even");
  return;
odd:
  printf("odd");
}
int main(int argc, char **argv) {
  int n = atoi(argv[1]);
  check(n);
  return 0;
}

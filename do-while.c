#include "stdio.h"
#include "stdlib.h"
int main(int argc, char **argv) {
  int n = atoi(argv[1]);
  do {
    printf("%d\n", n);
    n--;
  } while (n > 0);
  printf("%d\n", n);
  return 0;
}

#include "stdio.h"
#include "stdlib.h"

int sum(int n) {
  if (n == 0) {

    return 0;
  } else {
    int retAns = n + sum(n - 1);
    return retAns;
  }
}
int main(int argc, char **argv) {
  int n = atoi(*(argv + 1));
  printf("Sum of first %i integers: %i \n", n, sum(n));
  return 0;
}

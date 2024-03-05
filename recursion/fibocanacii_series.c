#include "stdio.h"
#include "stdlib.h"

int fibonacci(int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1 || n == 2) {
    return 1;
  } else {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}
void loopPrint(int n) {
  if (n < 0) {
    return;
  } else {
    loopPrint(n - 1);
    printf("%i ", fibonacci(n));
    return;
  }
}

int main(int argc, char **argv) {
  int n = atoi(*(argv + 1));
  loopPrint(n);
  printf("\n");
  return 0;
}

#include "stdio.h"
#include "stdlib.h"

// Function declarations
int factorial(int n);
int combination(int n, int m);

// Program body
int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  for (int i = 0; i <= n; i++) {
    for (int j = n - i; j > 0; j--) {
      printf(" ");
    }
    for (int j = 0; j <= i; j++) {
      printf("%d ", combination(i, j));
    }
    printf("\n");
  }
  return 0;
}

// Function definition
int factorial(int n) {
  if (n == 0 || n == 1) {
    return 1;
  }
  return n * factorial(n - 1);
}

int combination(int n, int m) {
  return factorial(n) / (factorial(m) * factorial(n - m));
}

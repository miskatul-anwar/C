#include "stdio.h"
#include "stdlib.h"
// This is a program to print sum of two numbers
int sum(int a, int b);

int main(int argc, char **argv) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  printf("%d + %d = %d\n", a, b, sum(a, b));
  return 0;
}

int sum(int a, int b) { return a + b; }

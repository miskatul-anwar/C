#include <stdio.h>
int main(void) {
  int a = 5, b = 6;
  a = a + b;
  b = a - b;
  a = a - b;
  printf("a=%d b=%d", a, b);
  printf("\n");
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;
  printf("a=%d b=%d", a, b);
}

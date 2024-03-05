#include <stdio.h>
int fact(int n);
int main(void) {
  int a;
  printf("Enter a number to calculate it's factorial: ");
  scanf("%d", &a);
  int s = fact(a);
  printf("Factorial of %d is %d\n", a, s);
  return 0;
}
int fact(int n) {
  if (n == 0) {
    return 1;
  }
  int factnm1 = fact(n - 1);
  int factorial = factnm1 * n;
  return factorial;
}

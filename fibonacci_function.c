#include <stdio.h>

int fibonacci(int n);
int main(void) {
  int nth_term;
  printf("Enter a number:");
  scanf("%d", &nth_term);
  fibonacci(nth_term);
}
int fibonacci(int n) {
  int sum;
  if (n <= 1) {
    return n;
  } else {
    sum = fibonacci(n - 1) + fibonacci(n - 2);
  }
  printf("%d", sum);
}

#include "stdio.h"
int calculate(int a, int b, char operator) {
  int result;
  switch (operator) {
  case '+':
    result = a + b;
    break;
  case '-':
    result = a - b;
    break;
  case '*':
    result = a * b;
    break;
  case '/':
    result = a / b;
    break;
  }
  return result;
}

int main(void) {
  int a, b;
  char operator;
  printf("number1 = ");
  scanf("%d", &a);
  printf("number2 = ");
  scanf("%d", &b);
  printf("operator = ");
  scanf("%c", &operator);
  scanf("%c", &operator);
  int result = calculate(a, b, operator);
  printf("result = %d\n", result);
  return 0;
}

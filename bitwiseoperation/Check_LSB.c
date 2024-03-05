#include <stdio.h>
int main(void) {
  int num;
  // input number
  printf("Enter number: ");
  scanf("%d", &num);
  if (num & 1) {
    printf("LSB: 1");
  } else {
    printf("LSB: 0");
  }
}

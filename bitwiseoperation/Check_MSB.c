#include <stdio.h>
#define BITS sizeof(int) * 8 // total bits required to represent int
int main(void) {
  int num;
  printf("Enter a Number: ");
  scanf("%d", &num);
  int msb = 1 << (BITS - 1);
  if (num & msb) {
    printf("MSB: 1");
  } else {
    printf("MSB: 0");
  }
  return 0;
}

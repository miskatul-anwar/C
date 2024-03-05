#include <stdio.h>
int main(void) {
  int num, n;
  printf("Enter number and the n'th bit to clear: ");
  scanf("%d%d", &num, &n);
  int bit = ~(1 << n);
  int New_num = num & bit;
  printf("Before: %b\n", num);
  printf("After: %b\n", New_num);
}

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

/*
 *
 * Write down a C program that
 * will take an integer x
 * as a parameter and return
 * after interchang all pairs of
 * consecutive bits. Assume  the
 * size of integers is 32 bits.
 *
 */

int main(void) {
  char *x = (char *)malloc(sizeof(char) * 100);
  printf("Enter a binary number: ");
  fgets(x, 100, stdin);
  char temp;
  for (int i = 0; i <= strlen(x) - 1;) {
    if (*x != *(x + i)) {
      if (*x == '0') {
        *x = '1';
        *(x + i) = '0';
        i += 2;
      } else if (*x == '1') {
        *x = '0';
        *x = *(x + i);
        i += 2;
      }
    } else {
      i++;
    }
  }
  printf("%s\n", x);
  return 0;
}

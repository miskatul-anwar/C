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

int main(int argc, char **argv) {
  char *x = (char *)malloc(sizeof(char) * 100);
  x = argv[1];
  char temp;
  for (int i = 0; i <= strlen(x) - 1; i++) {
    if (*x == *(x + 1)) {
      continue;
    } else {
      temp = *(x + i);
      *(x + i) = *(x);
      *(x) = temp;
    }
  }
  printf("%s\n", x);
  return 0;
}

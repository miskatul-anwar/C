#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv) {
  int n = atoi(argv[1]);
  for (int i = n; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
      if (i == 3 && j == 3) {
        printf("* ");
      } else if (i == 3 && j == 1) {
        printf("  ");
      } else if (i == j) {
        printf("0 ");
      } else {
        printf("1 ");
      }
    }
    for (int j = 2; j <= i; j++) {
      printf(" -1");
    }
    printf("\n");
  }
  return 0;
}

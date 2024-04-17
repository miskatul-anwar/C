#include <stdio.h>
void main() {
  int i, j;

  int a[2][2];
  int b[2][2];
  int c[2][2];
  printf("Enter numbers for matrix 1:\n");
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      printf("a[%d][%d] = ", i, j);
      scanf("%d", &a[i][j]);
    }
  }
  printf("\n");
  printf("Enter numbers for matrix 2:\n");
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      printf("b[%d][%d] = ", i, j);
      scanf("%d", &b[i][j]);
    }
  }
  printf("\n");
  printf("Now, see the result:\n");
  printf("\n");
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      c[i][j] = 0;
      for (int k = 0; k < 2; k++) {
        c[i][j] = c[i][j] + a[i][k] * b[k][j];
      }
      printf(" %d ", c[i][j]);
    }
    printf("\n");
  }
}

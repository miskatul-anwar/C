#include <math.h>
#include <stdio.h>
/*
 *   $ $ 0 $ $
 *   * 0 * 0 *
 *   $ $ 0 $ $
 *   * 0 * 0 *
 *   $ $ 0 $ $
 */
int main(void) {
  int row, col;
  printf("Enter row and column\n");
  printf("row = ");
  scanf("%i", &row);
  printf("col = ");
  scanf("%i", &col);
  for (int i = 1; i <= row; i++) {
    for (int j = 1; j <= col; j++) {
      if ((i + j) % 2 == 0 && (i + j) != 2 && j != col && j != 1) {
        printf("0 ");
      } else if (i % 2 != 0) {
        printf("$ ");
      } else if ((i % 2) == 0 && j != ceil(col / 2)) {
        printf("* ");
      } else {
        continue;
      }
    }
    printf("\n");
  }
}

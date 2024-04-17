#include <stdio.h>
int main() {
  int matrix1[3][3], n;
  printf("Enter the row and column numbers of a square matrix: ");
  scanf("%d", &n);
  int sum1 = 0, sum2 = 0;
  printf("Let's check if the matrix is a magic square or not:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("matrix[%d,%d] = ", i, j);
      scanf("%d", &matrix1[i][j]);
    }
  }
  printf("\n");
  printf("Entered matrix is shown below:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d\t", matrix1[i][j]);
    }
    printf("\n");
  }
  printf("\n================================\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      sum1 += matrix1[i][j];
      sum2 += matrix1[j][i];
    }
  }
  if (sum1 == sum2) {
    printf("The matrix is a magic square.\n");
  } else {
    printf("The matrix is not a magic square.\n");
  }
  printf("\nThanks\n");
  return 0;
}

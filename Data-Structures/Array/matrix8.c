#include <stdio.h>
#define count 3

int main() {
  int mat[count][count];
  int sum1 = 0, sum2 = 0;
  printf("This is a program that calculates the sum of the alternate "
         "elements:\n\n");
  printf("Enter the elements accordingly:\n");

  for (int i = 0; i < count; i++) {
    for (int j = 0; j < count; j++) {
      printf("matrix[%d, %d] = ", i, j);
      scanf("%d", &mat[i][j]);
    }
  }
  printf("Entered matrix:\n");
  for (int i = 0; i < count; i++) {
    for (int j = 0; j < count; j++) {
      printf("%d\t", mat[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < count; i++) {
    for (int j = 0; j < count; j++) {
      if (i == j || i + j == count - 1) {
        sum1 = sum1 + mat[i][j];
      } else {
        sum2 = sum2 + mat[i][j];
      }
    }
  }
  printf("Sum of the alternate elements : %d, %d\n", sum1, sum2);
  printf("\n");
  return 0;
}

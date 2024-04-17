#include <stdio.h>
int main() {
  int first[2][2];
  int second[2][2];
  printf("Enter numbers accordingly:\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("first[%d][%d] = ", i, j);
      scanf("%d", &first[i][j]);
    }
  }
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      second[i][j] = first[i][j];
    }
  }
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d ", second[j][i]);
    }
    printf("\n");
  }

  printf("\n");
  return 0;
}

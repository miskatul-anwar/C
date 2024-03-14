#include <stdio.h>
int main() {
  int n, i;
  printf("\n");
  for (int x = 1; x <= 20; x++)
    ;
  { printf("*"); }
  printf("\n");
  printf("Enter a number:");
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    if (i % 2 == 0) {
      printf("Even");
    } else {
      printf("Odd");
    }
    break;
  }
  printf("\n");
  for (int y = 1; y <= 20; y++)
    ;
  { printf("*"); }
  printf("\n");
  printf("Thanks");
  return 0;
}

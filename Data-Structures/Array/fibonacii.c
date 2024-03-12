#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv) {
  int n = atoi(argv[1]);
  int fibonacci[n];
  fibonacci[0] = 0;
  fibonacci[1] = 1;
  for (int i = 2; i < n; i++) {
    fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    printf("%d ", fibonacci[i]);
  }
  return 0;
}

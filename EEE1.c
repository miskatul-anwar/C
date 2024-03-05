#include "stdio.h"
int main(void) {
  int k;
  for (k = 0; k <= 5; k++) {
    printf("%d\n", (k % 2) ? k : k * 2);
  }
  return 0;
}

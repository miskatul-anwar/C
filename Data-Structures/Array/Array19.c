#include <stdio.h>
int main(void) {
  int array[] = {
      [0] = 200,
      [1] = 5,
  };
  for (int i = 0; i < 2; i++) {
    printf("%d\n", array[i]);
  }
  return 0;
}

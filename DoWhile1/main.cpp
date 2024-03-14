#include <stdio.h>
int main(void) {
  int i;
  i = 1;
  do {
    printf("%d\n", i);
    i++;
  } while (i < 5);
  printf("Printing the latest value of i: ");
  printf("%d\n", i);
  // let's test dowhile loops 🤙
  return 0;
}

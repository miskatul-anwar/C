#include "stdio.h"
#include "stdlib.h"
int main(int argc, char **argv) {
  printf("Hello "), printf("World!\n");
  int i = (4 + 5, 6 + 7);
  int j = (printf("This is a test!\n"), 8 + 9);
  printf("i = %d, j = %d\n", i, j);
  exit(0);
}

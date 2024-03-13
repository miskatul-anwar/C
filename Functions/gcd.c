#include <stdio.h>
#include <stdlib.h>
int gcd(int x, int y) {
  int r;
  while (y > 0) {
    r = x % y;
    x = y;
    y = r;
  }
  return x;
}

int main(int argc, char **argv) {
  int x = atoi(argv[1]);
  int y = atoi(argv[2]);
  printf("%d\n", gcd(x, y));
  return 0;
}

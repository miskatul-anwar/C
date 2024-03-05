#include "stdio.h"
#include "stdlib.h"
void loop(int n) {
  if (n == 0) {
    return;
  } else {
    loop(n - 1);
    printf("%i ", n);
  }
}
void structure(int n) {
  if (n == 0) {
    return;
  } else {
    structure(n - 1);
    loop(n);
    printf("\n");
    return;
  }
}

int main(int argc, char **argv) {
  int n = atoi(*(argv + 1));
  structure(n);
  return 0;
}

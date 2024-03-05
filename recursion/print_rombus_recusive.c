#include "stdio.h"
#include "stdlib.h"

void structure_of_rombus(int n) {
  if (n == 0) {
    return;
  } else {
    printf("  ");
    structure_of_rombus(n - 1);
    return;
  }
}

void print_row(int n) {
  for (int i = 0; i < n; i++) {
    printf("* ");
  }
  return;
}
// void print_row(int n)
/*
 * This is my future project to print a square using recursion
 */
void loop(int row, int col) {
  if (row == 0) {
    return;
  } else {
    structure_of_rombus(row);
    print_row(col);
    printf("\n");
    loop(row - 1, col);
    structure_of_rombus(row);
    print_row(col);
    printf("\n");
    return;
  }
}
int main(int argc, char **argv) {
  int x = atoi(*(argv + 1));
  int y = atoi(*(argv + 2));
  loop(x, y);
  return 0;
}

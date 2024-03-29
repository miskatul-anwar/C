#include <stdio.h>
int main(void) {
  FILE *fptr;
  fptr = fopen("filetest.txt", "w");

  char ch;
  fscanf(fptr, "%c", &ch);
  printf("character = %c\n", ch);

  return 0;
}

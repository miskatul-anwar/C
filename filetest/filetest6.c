#include <stdio.h>
int main(void) {
  FILE *fptr;
  fptr = fopen("filetest.txt", "r");
  char ch;
  ch = fgetc(fptr);
  while (ch != EOF) {
    printf("%c", ch);
    ch = fgetc(fptr);
  }
  printf("\n");
  return 0;
}

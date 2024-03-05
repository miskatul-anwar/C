#include <stdio.h>
int main(void){
  FILE *fptr;
  fptr = fopen("filetest.txt", "w");
  fputc('M', fptr);
  return 0;
}

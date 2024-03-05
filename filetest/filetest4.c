#include <stdio.h>
int main(void){
  FILE *fptr;
  fptr = fopen("filetest.txt", "r");


  printf("%c\n", fgetc(fptr));
  return 0;
}

#include <stdio.h>
int main(void){
  FILE *fptr;
  fptr = fopen("filetest.txt", "w");
  fprintf(fptr,"%c" ,'M');
  return 0;
}

#include <stdio.h>
int main(void){
  FILE *fptr;
  fptr = fopen("filetest.txt", "r");
  if(fptr== NULL){
    printf("File doesnot exists\n");
  }else{
    //closes the file;  
    fclose(fptr);
  }
}

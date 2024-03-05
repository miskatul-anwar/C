#include <stdio.h>
#include <stdlib.h>
int main(void){
  FILE *ptr;
  ptr = fopen("StudentAll.pdf", "w");
  if(ptr==NULL){
    printf("File doesn't contain anything.\n");
  }
  char i='a';
  for(;;){
    if(i>'z'){
      break;
    }else{
      fprintf(ptr," %c",i);
    }
    i++;
   }
  fclose(ptr);
  FILE *ptr2;
  ptr2 = fopen("StudentAll.pdf", "r");

  if(ptr2==NULL){
    printf("Could Not be opened.\n");
    return 0;
  }
    fseek(ptr2,5L,0);
    printf(" %c",getc(ptr2));
    fseek(ptr2,-3L,1);
    printf(" %c",getc(ptr2));
    

    fclose(ptr2);
    return 0;
}

#include <stdio.h>
int main(void){
  int number, leading_zero=0,size;
  printf("Enter a number: ");
  scanf("%d",&number);
  size = 8*sizeof(int);
  for(int i=0;i<size;i++){
    if(number & 1){
      break;
    }else{
      leading_zero++;
    }
    number>>=1;
  }
  printf("Number of leading zero: %d",leading_zero);
  return 0;
}

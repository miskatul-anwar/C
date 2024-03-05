#include <stdio.h>
int main(void){
  int number, trailing_zero=0,int_size;
  printf("Enter a number to calculate trailing zeros");
  scanf("%d",&number);
  int_size = 8*sizeof(int);
  for(int i=0;i<int_size;i++){
    if(number & 1){
      break;
    }else{
      trailing_zero++;
    }
    number>>=1;
  }
  printf("Number of trailing zero: %d",trailing_zero);
  return 0;
}

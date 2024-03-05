#include "stdio.h"
int main(void){
  int num1,num2,temp=0;
  printf("number 1: ");scanf("%d", &num1);
  printf("number 2: ");scanf("%d", &num2);
  //This is a simple algorithm to calculate gcd
  while(1){
    if(num2==0){
      printf("GCD: %i",num1);
      break;
    }
    temp = num1 % num2;
    num1 = num2;
    num2 = temp;
  }
  return 0;
}

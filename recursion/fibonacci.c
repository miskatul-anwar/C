#include "stdio.h"
int fibonacci(int n){
  if(n<=1){
    return n;
  }
  return fibonacci(n-1)+fibonacci(n-2);
}
int looprint(int i){
  if(i<=0){
    return 0;
  }
  printf("%d ",fibonacci(i));
  looprint(i-1);
}
int main(void){
  int n;
  printf("Enter a number: ");scanf("%d",&n);
  looprint(n);
  return 0;
}

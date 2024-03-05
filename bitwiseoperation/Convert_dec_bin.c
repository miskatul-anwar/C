#include <stdio.h>
#define index 8
int main(void){
  int dec;
  int bit[index];//assuming a 32bit integer
  for(int i=0;i<index;i++){
    bit[i]=0;
  }
  printf("Enter a number: ");
  scanf("%d", &dec);
  if(dec==0){
    printf("Converted to : 0");
  }
  printf("Converted to: ");
  for(int i=0;i<index;i++){
  bit[i]=dec%2;
  dec=dec/2;
  }
  for(int i=index-1;i>=0;i--){
    printf("%d ", bit[i]);
  }
  return 0;
}

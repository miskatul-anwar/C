#include <stdio.h>
int main(void){
  int n,zeros=0,ones=0;
  printf("Enter a number: ");
  scanf("%d", &n);
  int size = 8* sizeof(int);
  for(int i=0;i<size;i++){
    if(n & 1){
      ones++;
    }else{
      zeros++;
    }
    n>>=1;
  }
  printf("ones\tzeros\n");
  printf("%d\t%d",ones,zeros);
  return 0;
}

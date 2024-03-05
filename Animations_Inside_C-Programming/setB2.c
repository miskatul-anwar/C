#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
  int *x =(int*)malloc(100*sizeof(int));
  for(int i=0;i<=10;i++){
    scanf("%d",&x[i]);
  }
  for(int i=0;i<10;i++){
    if(x[i]==x[i+1]){
      printf("%i",x[i]);
    }else if(x[i]!=x[i+1] && x[i]==1){
      printf("0");
    }else if(x[i]!=x[i+1] && x[i]==0){
      printf("1");
    }
  }
  free(x);
  return 0;
}

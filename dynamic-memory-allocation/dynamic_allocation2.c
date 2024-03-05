#include <stdio.h>
#include <stdlib.h>
int main(void){
  int *ptr;
  ptr = (float *)malloc(5*sizeof(float));


  ptr[0] = 1;
  ptr[1] = 1;
  ptr[2] = 1;
  ptr[3] = 1;
  ptr[4] = 1;
  ptr[5] = 1;
  ptr[6] = 1;

  for(int i=0;i<7;i++){
    printf("%f", ptr[i]);
  }
  return 0;
}

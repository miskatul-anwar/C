#include "miskat.h"
int main(void){
  int *list = malloc(3*sizeof(int));
  for(int i= 0;i<3;i++){
    *(list + i) = i + 1; 
  }
  if (list == NULL){
    //handle memory allocation error
    return 1;
  }
  for(int i=0;i<3;i++){
    printf("%i ",*(list + i));
  }
  return 0;
}

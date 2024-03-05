#include "miskat.h"
int main(void){
  int x = get_int("Entet an integer: ");
  int *array = malloc(N*sizeof(int));
  if(array == NULL){
    //handle memory allocation error
    return 1;
  }
  for(int i=0;i<x;i++){
    *(array + i) = i;
    printf("%i ",*(array + i));
  }
  free(array);
  return 0;
}

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(void){
  int *ptr;
  ptr = (int *)malloc(5*sizeof(int));
  if(ptr == NULL){
    printf("Memory Allocated.\n");
  }else{
    printf("Memory Not Allocated.\n");
  }
  int *arg;
  arg = calloc(5, sizeof(int));
  if(arg == NULL){
    printf("Memory Allocated 2");
  }else {
   printf("Memory Not Allocated 2");
  }
  free(arg);
  free(ptr);
}

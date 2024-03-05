#include <stdlib.h>
#include <stdio.h>
int main(void){
  int *ptr;
  ptr = (int*)calloc(5, sizeof(int));
  printf("Enter numbers(5): ");
  for (int i=0;i<5;i++) {
    scanf("%d",&ptr[i]);
  }
  ptr = realloc(ptr,8);
  printf("Enter numbers(8): ");
  for (int i=0;i<8;i++) {
    printf("Number %d",&ptr[i]);
  }
  return 0;
}

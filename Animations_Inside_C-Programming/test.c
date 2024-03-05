#include "miskat.h"
void closed(int space, int n);
void main(void){
  int i;
  for(int i=0;i<5;i++){
    closed(2,10);
  }
}
void closed(int space, int n){
  int i = 0; 
  for(i=0;i<n;i++){
    printf("\n");
    for(i=0;i<=space;i++){
      printf(" ");
    }
     printf("   _\n");
  }
    for(i=0;i<=space;i++){
     printf(" ");
    }
    printf("\__(\0)>\n");
    for(i=0;i<=space;i++){
    printf(" ");
  }
    printf("\\___)\n");
}

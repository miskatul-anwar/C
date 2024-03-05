#include "stdio.h"
int main(void){
  int k=1;
  switch(k%2){
    case 0: k+=2;
    case 1: k=0;
    case 5: k=1;
  };
  printf("K = %d",k);
  return 0;
}

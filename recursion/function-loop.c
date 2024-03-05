#include "stdio.h"
#include "stdlib.h"
int loop(int n){
  if(n==0){
    return 0;
  }else{
    printf("%i ",n);
    loop(n-1);
  }
}
int main(int argc, char *argv[]){
  int n = atoi(argv[1]);
  loop(n);
  return 0;
}

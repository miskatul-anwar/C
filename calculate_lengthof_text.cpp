#include "iostream"
#include "string.h"
#include "stdlib.h"
using namespace std; 

int main(void){
  char *s = (char*)malloc(100*sizeof(char));
  fgets(s,100,stdin);
  int count = 0;
  int i = 0;
  for(;;){
    if(*(s+i)!='\n'){
      count++;
    }else{
      break;
    }
    i++;
  }
  cout<<count;
  return 0;
}

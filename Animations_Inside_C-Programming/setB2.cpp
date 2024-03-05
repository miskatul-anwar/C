#include "iostream"
#include "cstdlib"
#include "cstring"
#include "cstdio"
using namespace std;
int main(void){
  char *x=(char*)malloc(5*sizeof(char));
  if(x==NULL){
    //handle memory allocation error
    return 1;
  }else{
    fgets(x,5,stdin);
  }
  int i = 0;
  for(;;){
    if(i<strlen(x)-1){
      if(*(x+i)==*(x+i+1)){
        cout<<*(x+i);
      }else if(*(x+i)!=*(x+i+1) && *(x+i)==1){
        cout<<"0 ";
      }else if(*(x+i)!=*(x+i+1) && *(x+i)==0){
        cout<<"1 ";
      }
    }
    i++;
  }
  free(x);
  return 0;
}

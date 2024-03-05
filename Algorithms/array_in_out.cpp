#include "iostream"
#include "stdlib.h"
using namespace std;
int main(void){
  int x, i;
  cout<<"how many values: "; cin>>x;
  int *array = (int*)malloc(x*sizeof(int*));
  if(array==NULL){
    //handle memory allocation error
    return 1;
    //exiting with an error code
  }
  cout<<endl;

  for(i=0;i<x;i++){
    cout<<"array["<<i<<"]=";
    cin>>*(array+i);
  }
  cout<<endl;
  for(i=0;i<x;i++){
    cout<<"| "<<*(array+i)<<" |";
  }
  cout<<endl;
  return 0;
}

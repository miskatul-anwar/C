#include "iostream"
#include "stdlib.h"
using namespace std;
//simple bubble sort algorithm 
int main(void){
  int x, i, count;
  cout<<"Enter a number: ";cin>>x;
  int *array =(int*)malloc(x*sizeof(int*));
  i=0;
  for(;;){
    if(i<x){
      cout<<"index["<<i<<"] = ";
      cin>>*(array+i);
    }else{
      break;
    }
    i++;
  }
  cout<<endl;
  cout<<"| ";
  for(i=0;i<x;i++){
    cout<<*(array+i)<<" | ";
  }
  cout<<endl;
  
  count = 1;
  while(count<x){
    for(i=0;i<x-count;i++){
      if(*(array+i)>*(array+i+1)){
        int temp = *(array+i);
        *(array+i) = *(array+i+1);
        *(array+i+1) = temp;
      }else{
        continue;
      }
    }
    count++;
  }
  cout<<endl<<"| ";
  for(i=0;i<x;i++){
    cout<<*(array+i)<<" | ";
  }
  cout<<endl;
  free(array);
  return 0;
}

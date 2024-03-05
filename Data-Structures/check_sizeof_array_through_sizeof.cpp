#include "iostream"
using namespace std; 

int main(void){
  int *array = (int*)malloc(10*sizeof(int));
  int i = 0;
  for(;;){
    if(i<10){
      *(array+i)=i;
    }else{
      break;
    }
    cout<<" "<<*(array+i);
    i++;
  }
  int size = sizeof(array)/sizeof(*(array+i));
  cout<<endl<<size<<endl;
  return 0;
}


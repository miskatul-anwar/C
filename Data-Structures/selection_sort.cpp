#include "iostream"
#include "cstdlib"
using namespace std;
int* selection_sort(int *array, int size){
  for(int j=0;j<size;j++){
    for(int i=0;i<size;i++){
      if(*(array+i)>*(array+i+1)){
      int temp=*(array+i+1);
      *(array+i+1)=*(array+i);
      *(array+i)=temp;
      }else{
      continue;
      }
    }
  }
  return array;
}

int main(void){
  int size;
  cout<<"Enter a number: ";cin>>size;
  int* array =(int*)malloc(size*sizeof(int));
  if(array==NULL){
    return 1;
    //handle memory allocation error
  }
  for(int i=0;i<size;i++){
    *(array+i)=10+i;
  }
  int* sorted_array=selection_sort(array,size);
  for(int i=0;i<size;i++){
    cout<<" "<<*(sorted_array+i);
  }

  //deleting the allocated memory 
  delete[] array;
  //delete[] sorted_array;
  return 0;
}

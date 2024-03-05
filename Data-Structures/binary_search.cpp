#include "iostream"
#include "cstdlib"
using namespace std;
//--> the time complexity is : log 2 base n; depends on 2^n
int binary_search(int *array, int data, int size){
  int left=0, right=size-1, mid=0;
  for(;;){
    if(left<=right){
      mid=(left+right)/2;
      if(*(array+mid)==data){
        return mid;
      }else if(*(array+mid)<=data){
        left=mid+1;
      }else if(*(array+mid)>=data){
        right=mid-1;
      }else{
        continue;
      }
    }
  }
  return -1; //not found!
}

int main(void){
  int size;
  cout<<"Enter the sizeof array: ";cin>>size;
  int *array = (int*)malloc(size*sizeof(int));
  if(array==NULL){
    return 1; //handle memory allocation error
  }
  for(int i=0;i<size;i++){
    cout<<"Array["<<i<<"] = ";
    cin>>*(array+i);
  }
  int data;
  cout<<"Enter the number to search: ";cin>>data;
  int index_of_data=binary_search(array,data,size);
  cout<<"Value found at "<<index_of_data+1<<" position"<<endl;
  return 0;
}

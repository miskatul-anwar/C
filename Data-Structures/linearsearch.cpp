#include "iostream"
#include "cstdlib"
using namespace std; 
int search(int *array, int elem){
  int i;
  int count = 0;
  for(i=0;i<10;i++){
    if(*(array+i)==elem){
      count++;
    }  
  }
  if(count==0){
    cout<<"Not Available";
  }
  return count;
  
}
int main(void){
  int *array = (int*)malloc(10*sizeof(int*));
  for(int i=0;i<10;i++){
    cin>>*(array+i);
  }
  int elem; cin>>elem;
  int index=search(array, elem);
  cout<<index<<"times"<<endl;
  free(array);
  return 0;
}

#include "iostream"
using namespace std;
int main(void){
  int count = 1;
  int lim; 
  cout<<"Enter a number: ";cin>>lim;
  for(int row = 1; row <= lim; row++){
    for(int col =1; col<=row; col++){
      cout<<" "<<count<<" ";
      count++;
    }
    cout<<endl;
  }
}

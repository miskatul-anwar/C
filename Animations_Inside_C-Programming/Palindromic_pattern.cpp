#include "iostream"
using namespace std;
int main(void){
  const int n = 5;
  int row,count;
  for(row=1;row<=n;row++){
    for(count=1;count<=n-row;count++){
      cout<<"   ";
    }
    for(count=row;count>=1;count--){
        cout<<" "<<count<<" ";
      }
      for(count=2;count<=row;count++){
        cout<<" "<<count<<" ";
      }
    cout<<endl;
  }
  return 0;
}

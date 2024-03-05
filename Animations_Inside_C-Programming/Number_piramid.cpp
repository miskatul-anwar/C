#include "iostream"
using namespace std;
int main(void){
  const int n = 5;
  int row,col,count;
  for(row = 1; row <= n; row++){
    for(col = 1; col<=n-row; col++){
      cout<<" ";
    }
    count = 1;
    for(col = 1; col <= row; col++){
      cout<<" "<<count<<" ";
      count++;
    }
    cout<<endl;
  }
  return 0;
}

#include "iostream"
using namespace std;
int main(void){
  int n;
  cin>>n;
  if(n%2!=0){
    cout<<"Odd"<<endl;
  }else{
    cout<<"Even"<<endl;
  }
  return 0;
}
// space complexity is order of one O(1)

// for array[n] the space complexity is : O(n)
// for array[n][n] the space complexity is : O(n^2)


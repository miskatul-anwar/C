#include <iostream>
using namespace std;
int main(void){
  int num;
  cout << "Enter a number: " <<endl;
//enter a number
  cin >> num;
  if(num>0)
  {
    cout <<"positive" <<endl;
  }
  if(num<0)
  {
    cout<<"negative"<<endl;
  }
  if(num==0)
  {
    cout<<"zero"<<endl;
  }
  return 0;
}

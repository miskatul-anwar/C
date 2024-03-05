#include "iostream"
#include "math.h"
int sum(int x, int y);
int squareofsum(int x, int y);
int squareofsumplus(int x, int y);


using namespace std;
int main(void){ 
  int x, y;
  cout<<"x = ";cin>>x;
  cout<<"y = ";cin>>y;
  cout<<squareofsumplus(x,y);
  return 0;
}

//Now, write those functions

int sum(int x, int y){
  return x + y;
}
int squareofsum(int x, int y){
  return pow(sum(x,y), 2);
}
int squareofsumplus(int x, int y){
  return 2*squareofsum(x,y);
}

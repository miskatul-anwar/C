#include "stdio.h"
#include "iostream"
using namespace std;
int main(void)
{
  int x;
  int y;
  float result;
  cout<<"Enter two values 'x','y' to calculate(x/y): "<<endl;
  cout<<"x = ";
  cin>>x;
  printf("\n");
  cout<<"y = ";
  cin>>y;
  y!=0?result = (x/y):printf("Error! Undefined.");
  return 0;
}

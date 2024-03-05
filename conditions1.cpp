#include <stdio.h>
#include<iostream>
using namespace std;
int main(void)
{
  int i,j,k,max;
  cout<<"Enter i=\t";
  cin>>i;
  cout<<"Enter j=\t";
  cin>>j;
  cout<<"Enter k=\t";
  cin>>k;
  i>j?i>k?max=i:max=k:j>k?max=j:max=k;
  cout<<"Max number is:  "<<max<<endl;
  return 0;
}

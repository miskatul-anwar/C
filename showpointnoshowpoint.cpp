#include "stdio.h"
#include "iostream"
#include "iomanip"

using namespace std;

#define n 25

int main(void)
{
  int num1,num2;
  cout<<setw(n)<<"Enter first number: ";
  cin>>num1;
  cout<<setw(n)<<"Enter second number: ";
  cin>>num2;
  float sum = num1+num2;
  cout<<noshowpoint;
  cout<<fixed;
  cout<<setprecision(2);
  cout<<setw(n)<<"Summation = "<<sum<<endl;
}

#include "iostream"
#include "cstdio"
#include "cmath"
using namespace std;
int main(void){
  int a,b,temp=0;
  cin>>a>>b;
  //Using euclids algo to calculate gcd
  while(1){
    if(b==0){
      printf("GCD: %d\n",a);
      break;
    } 
    temp = a%b;
    a = b;
    b = temp;
  }
}

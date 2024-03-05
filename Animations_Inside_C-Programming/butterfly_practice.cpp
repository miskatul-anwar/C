#include "/home/miskatul-anwar/.config/miskat.h"
#include "iostream"
using namespace std;
int main(void){
  const int lim = get_int("Enter a number: ");
    for(int row = 1;row<=lim;row++){
    for(int col=1;col<=row;col++){
      cout<<"*";
    }
    for(int col=1;col<=2*lim-2*row;col++){
      cout<<" ";
    }
    for(int col=1;col<=row;col++){
      cout<<"*";
    }
    cout<<endl;
  }
  for(int row=lim;row>=1;row--){
    for(int col=1;col<=row;col++){
      cout<<"*";
    }
    for(int col=1;col<=2*lim-2*row;col++){
      cout<<" ";
    }
    for(int col=1;col<=row;col++){
      cout<<"*";
    }
    cout<<endl;
  }

}

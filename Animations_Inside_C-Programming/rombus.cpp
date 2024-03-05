#include "/home/miskatul-anwar/.config/miskat.h"
#include "iostream"
using namespace std; 

int main(void){
  int x = get_int("Enter the sides of rombus: ");
  for(int i = 1; i <= x; i++){
    for(int j = 1; j < i; j++){
      cout<<" ";
    }
    for(int j = 1; j < x; j++){
      cout<<" * ";
    }
    cout<<endl;
  }
}

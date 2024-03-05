#include "iostream"
#include "cstdio"
#include "cmath"
using namespace std;
int main(void){
  int row, col, i, j;
  cout<<"row =";cin>>row;
  cout<<"col =";cin>>col;
  for(i=1;i<=row;i++){
    for(j=1;j<=col;j++){
      if(i%2!=0){
        if(j==(col/2)+1){
          cout<<"O ";
        }else{
          cout<<"$ ";
        }
      }else if(i%2==0){
        if(j==(col/2)+1){
          cout<<"$ ";
        }else{
          cout<<"* ";
        }
      }
    }
    cout<<endl;
  }
}

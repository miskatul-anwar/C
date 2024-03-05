#include "iostream"
using namespace std;
int main(void){
  int num = 53, i, j;
    for( i = 1; i <=3; i++){
      for( j = 1; j <= num; j++){
      if((i+j)%4 == 0 || i==2 && j%4==0){
          cout<<"*";
      }else{
        cout<<" ";
      }
    }
    cout<<endl;
  }
}


#include "iostream"
#include "cstring"
#include "string"
using namespace std;
int main(void){
  string mystr;
  string mystr2;
  cout<<"Enter the encripted text: ";
  getline(cin,mystr);
  mystr2.resize(mystr.length());
  for(int i=0;i<mystr.length();i++){
    mystr2[i]=char(int(mystr[i])-6);
  }
  cout<<"The decripted text: "<<mystr2<<endl;
  return 0;
}

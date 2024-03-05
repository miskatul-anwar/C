#include "iostream"
int main(void){
  int n1, n2, result;
  n1 = 10;
  n2 = 20;
  result = n1 + n2;
  return 0;
}

//--> O(1):order of one=> when the number of operation doesn't depend on input.

#ifdef 
int main(void){
  int n, result;
  cin>>n;
  result = n*(n+1)/2;
  cout<<"the result is : "<<result<<endl;
}
#elif 
int main(void){
  int i, n, result;
  cin>>n;
  result = 0;
  for(i=1;i<=n;i++){
    result = result + i;
  }
  cout<<"The result is: "<<result<<endl;
  return 0 ;
}
//--> order of n. when it can eterate n times . //linear type
#elif
int main(void){
  int i, n, result;
  cin>>n;
  int count = 0;
  int j;
  result = 0;
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      count = count + i;
    }
  }
  cout<<count;
  return 0;
}
// o(n^2)

/*    n --> count 
      1 --> 1
      2 --> 4
      3 --> 9
     10 --> 100
    100 --> 1000 */
#endif

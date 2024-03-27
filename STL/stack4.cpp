#include "bits/stdc++.h"
using namespace std;
int main(void) {
  stack<int> mystack1, mystack2;
  mystack1.push(1), mystack1.push(2), mystack1.push(3), mystack1.push(4);
  mystack2.push(3), mystack2.push(5), mystack2.push(7), mystack2.push(9);
  mystack1.swap(mystack1);
  cout << "mystack1 :";
  while (!mystack1.empty()) {
    cout << " " << mystack1.top() << " ";
    mystack1.pop();
  }
  cout << endl;
  cout << "mystack2 :";
  while (!mystack2.empty()) {
    cout << " " << mystack2.top() << " ";
    mystack2.pop();
  }
  cout << endl;
  return 0;
}

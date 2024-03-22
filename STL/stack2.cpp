#include <bits/stdc++.h>
#include <iostream>
#include <stack>
// Stacks are LIFO
using namespace std;
int main(void) {
  stack<int> st;
  st.push(5), st.push(4), st.push(3), st.push(7); // Looks like {5,4,3,7}
  st.pop();                                       // Now, {5,4,3}
  cout << "The size of the stack is :" << st.size();
  cout << "\nThe topmost element of the stack is : " << st.top();
  cout << "\nIs the stack empty? " << endl;
  if (st.empty()) {
    cout << "Stack is empty" << endl;
  } else {
    cout << "Stack is not empty" << endl;
  }
  stack<int> st2;
  st.swap(st2);
  cout << "\nThe topmost element of the new stack is : " << st2.top();
  return 0;
}

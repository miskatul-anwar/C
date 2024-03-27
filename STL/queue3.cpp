#include "bits/stdc++.h"
using namespace std;
int main(void) {
  string input = "Technical Interview Preparation", eachword;
  queue<string> st;
  stack<string> st2;
  stringstream ss(input);
  while (ss >> eachword) {
    st.emplace(eachword);
  }
  while (!st.empty()) {
    st2.push(st.front());
    st.pop();
  }
  while (!st2.empty()) {
    st.push(st2.top());
    st2.pop();
  }
  while (!st.empty()) {
    cout << st.front() << " ";
    st.pop();
  }
  cout << endl;
  return 0;
}

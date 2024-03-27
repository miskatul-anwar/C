#include "bits/stdc++.h"
using namespace std;
int main(void) {
  string input = "Technical Interview Preparation", eachword;
  stack<string> st;
  stringstream ss(input);
  while (ss >> eachword) {
    st.push(eachword);
  }
  while (!st.empty()) {
    cout << st.top() << " ";
    st.pop();
  }
  cout << endl;
  return 0;
}

#include "bits/stdc++.h"
#include <iostream>
using namespace std;
int main(void) {
  string str;
  getline(cin, str);
  stack<char> st;
  for (int i = str.length() - 1; i >= 0; i--) {
    if (!st.empty() && str[i] == st.top()) {
      st.pop();
    } else {
      st.push(str[i]);
    }
  }
  if (st.empty()) {
    cout << "Empty String" << endl;
    return 1;
  }
  while (!st.empty()) {
    cout << st.top();
    st.pop();
  }
  cout << endl;
  return 0;
}

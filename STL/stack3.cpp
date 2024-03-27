#include <bits/stdc++.h>
using namespace std;
int main(void) {
  stack<int> st;
  st.push(21), st.push(22), st.push(24), st.push(25);
  int num = 0;
  st.push(num);
  st.pop(), st.pop(), st.pop();
  while (!st.empty()) {
    cout << st.top() << endl;
    st.pop();
  }
  return 0;
}

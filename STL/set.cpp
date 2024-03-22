#include "bits/stdc++.h"
using namespace std;
int main(void) {
  set<int> st;
  st.insert(10), st.insert(9), st.insert(8), st.insert(7);
  for (set<int>::iterator i = st.begin(); i != st.end(); i++) {
    cout << *i << " ";
  }
  cout << endl;
  if (st.count(8)) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
  if (st.find(9) != st.end()) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
  return 0;
}

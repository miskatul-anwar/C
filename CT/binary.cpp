#include "bits/stdc++.h"
typedef long long ll;
using namespace std;

string binary(int x);

int main() {
  int n;
  cin >> n;
  cout << binary(n) << endl;
  return 0;
}

string binary(int x) {
  string ans;
  stack<char> st;
  while (x > 0) {
    st.push('0' + x % 2);
    x /= 2;
  }
  reverse(ans.begin(), ans.end());
  return ans;
}

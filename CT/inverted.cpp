#include "bits/stdc++.h"
using namespace std;

int main(void) {
  int x = 21, p = 3, ans = 0;
  string size = to_string(x);
  int n = size.size();
  for (int i = p - 1; i < n; i++) {
    ans = x ^ (1 << i);
  }
  cout << ans << endl;
  return 0;
}

#include "bits/stdc++.h"
using namespace std;

int main() {
  int x = 12, cnt = 0;
  //  cout << bitset<8>(x) << "\n";
  cout << __builtin_popcount(x) << "\n";
  bitset<8> s(x);
  for (int i = 0; i < s.size(); ++i) {
    s[i] == 1 ? cnt++ : NULL;
  }
  cout << cnt << "\n";
  cnt = 0;
  for (int i = 0; i < 32; i++) {
    if ((1 << i) & x) {
      cnt++;
    }
  }
  cout << cnt << "\n";
  return 0;
}

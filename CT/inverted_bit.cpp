#include "bits/stdc++.h"
using namespace std;

string invert(bitset<8> x, int p, int n);

int main() {
  int n, p;
  bitset<8> x;
  cin >> x >> p;
  n = x.size();
  cout << invert(x, p, n) << endl;
  return 0;
}

string invert(bitset<8> x, int p, int n) {
  for (int i = p - 1; i < p - 1 + n; i++) {
    if (x[i] == 0)
      x[i] = 1;
    else
      x[i] = 0;
  }
  return x.to_string();
}

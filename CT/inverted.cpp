#include "bits/stdc++.h"
using namespace std;

int invert(int x, int p, int n);

int main(void) {
  int x = 21, p = 3;
  string size = to_string(x);
  int n = size.size();
  cout << invert(x, p, n) << endl;
  return 0;
}

int invert(int x, int p, int n) {
  for (int i = p - 1; i < n + p - 1; i++) {
    x = x ^ (1 << i);
  }
  return x;
}

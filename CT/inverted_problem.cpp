#include <bits/stdc++.h>
using namespace std;
string inverted(string &x, int n, int p);
int main() {
  string x = "11111111111111";
  int p = 4, n = x.size();
  cout << inverted(x, n, p - n) << endl;
  return 0;
}
string inverted(string &x, int n, int p) {
  for (int i = n; i >= p; i--) {
    if (x[i] == '0') {
      x[i] = '1';
    } else {
      x[i] = '0';
    }
  }
  return x;
}

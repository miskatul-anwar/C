#include <bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n) { return (n and !(n & n - 1)); }
int main(void) {
  int n;
  cin >> n;
  cout << (isPowerOfTwo(n) ? "Yes" : "No");
  return 0;
}

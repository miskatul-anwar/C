#include "bits/stdc++.h"

using namespace std;
int pack(int a, int b, int c);
int unpack(int packed, int i);
int main(void) {
  int a, b, c;
  cin >> a >> b >> c;
  cout << pack(a, b, c);
  return 0;
}
int pack(int a, int b, int c) { return (a << 16) | (b << 8) | c; }

int unpack(int packed, int i) { return (packed >> (i * 8)) & 0xff; }

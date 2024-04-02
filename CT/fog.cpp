#include "bits/stdc++.h"
using namespace std;
int main(void) {
  float x, g, f;
  cin >> x;
  g = 7 * x - 6;
  f = 4 * g * g + 2 * (1 / (g * g)) - 3;
  cout << f << endl;
}

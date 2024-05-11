#include "bits/stdc++.h"
using namespace std;

int main() {
  string str;
  cin >> str;
  for (auto it : str) {
    if (count(str.begin(), str.end(), it) > 1) {
      cout << it << endl;
      break;
    }
  }
  return 0;
}

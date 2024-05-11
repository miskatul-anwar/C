#include "bits/stdc++.h"
using namespace std;

int main() {
  vector<pair<int, int>> v = {{1, 2}, {3, 4}, {5, 6}};
  for (auto it : v) {
    cout << it.first << " " << it.second << endl;
  }
  return 0;
}

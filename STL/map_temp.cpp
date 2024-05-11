#include "bits/stdc++.h"
using namespace std;
int main() {
  map<int, double> mp = {{1, 2}, {2, 3}, {3, 4}};
  for (auto it : mp) {
    cout << it.first << " " << it.second << endl;
  }
  return 0;
}

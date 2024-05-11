#include "bits/stdc++.h"
using namespace std;
int main() {
  vector<int> x = {1, 2, 3, 7, 1, 6, 9};
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        for (int l = k + 1; l < n; l++) {
          if (x[i] + x[j] + x[k] + x[l] == n) {
            if (x[i] != 0 and x[j] != 0 and x[k] != 0 and x[l] != 0) {
              cout << x[i] << " " << x[j] << " " << x[k] << " " << x[l] << endl;
              return 0;
            }
          }
        }
      }
    }
  }
  cout << "impossible" << endl;
  return 1;
}

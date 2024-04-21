#include "bits/stdc++.h"
#include <cstdlib>
using namespace std;
int main(void) {
  vector<int> v = {12, 45, 23, 51, 19, 8};
  for (int i = 0; i < v.size(); i++) {
    int current = v[i], j = i - 1;
    while (v[j] > current) {
      v[j + 1] = v[j], j--;
    }
    v[j + 1] = current;
  }
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  EXIT_SUCCESS;
}

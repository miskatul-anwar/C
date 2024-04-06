#include <bits/stdc++.h>
using namespace std;
int main(void) {
  int key, a, b, mid;
  vector<int> v = {1, 2, 12, 34, 5, 7, 6, 2, 8, 25, 8};
  sort(v.begin(), v.end());
  a = 0, b = v.size(), mid = 0;
  cout << "Key to search: ";
  cin >> key;
  for (int i = a; i < b; i++) {
    mid = (a + b) / 2;
    if (key == v[mid]) {
      cout << "Found at index: " << mid << endl;
      return 0;
    } else if (key < v[mid]) {
      b = mid;
    } else {
      a = mid;
    }
  }
  return 0;
}

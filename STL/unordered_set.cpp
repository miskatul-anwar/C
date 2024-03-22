#include "bits/stdc++.h"
using namespace std;
int main(void) {
  unordered_set<int> uset;
  uset.insert(1), uset.insert(10), uset.insert(13), uset.insert(4);
  for (unordered_set<int>::iterator it = uset.begin(); it != uset.end(); it++) {
    cout << *it << " ";
  }
  cout << endl;
  return 0;
}

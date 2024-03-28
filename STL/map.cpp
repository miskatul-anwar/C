#include "bits/stdc++.h"
using namespace std;
int main(void) {
  map<int, int> mpp;
  //  map<pair<int, int>, int> mp;
  mpp.insert({3, 1});
  mpp.insert({4, 2}); // mpp{key,value}
  for (auto it = mpp.begin(); it != mpp.end(); it++) {
    cout << it->first << " " << it->second << "\n";
  }
  return 0;
}

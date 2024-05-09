#include <bits/stdc++.h>
using namespace std;

int main() {
  map<int, float> oldmast_map, trans_map;
  int key = 0;
  double val = 0;
  ifstream oldmast("oldmast.txt");
  if (!oldmast.is_open()) {
    return 1;
  } else {
    while (oldmast >> key >> val) {
      oldmast_map[key] = val;
    }
  }
  oldmast.close();

  ifstream trans("trans.txt");
  if (!trans.is_open()) {
    return 2;
  } else {
    while (oldmast >> key >> val) {
      if (oldmast_map.find(key) == oldmast_map.end()) {
        oldmast_map[key] = val;
      } else {
        oldmast_map[key] += val;
      }
    }
  }
  trans.close();
}

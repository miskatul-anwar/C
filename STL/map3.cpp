#include "bits/stdc++.h"
using namespace std;
int main(void) {
  map<string, int> priceMap;
  priceMap.insert({"Avocado", 1}), priceMap.insert(make_pair("apple", 12)),
      priceMap["Guava"] = 12;
  for (auto i = priceMap.begin(); i != priceMap.end(); i++) {
    cout << i->first << " " << i->second << " " << endl;
  }
  return 0;
}

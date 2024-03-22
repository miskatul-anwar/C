#include "bits/stdc++.h"
using namespace std;
int main(void) {
  multiset<int> ms;
  ms.insert(1), ms.insert(2), ms.insert(3), ms.insert(4), ms.insert(5);
  for (auto it : ms) {
    cout << it << " ";
  }
  cout << endl;
  return 0;
}

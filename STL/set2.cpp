#include "bits/stdc++.h"
using namespace std;
int main(void) {
  set<char> a;
  a.insert('G'), a.insert('H'), a.insert('G');
  for (auto i : a) {
    cout << i << " ";
  }
  cout << endl;
  exit(0);
}

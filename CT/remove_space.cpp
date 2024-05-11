#include "bits/stdc++.h"
using namespace std;

int main() {
  string s, res;
  ifstream file("testfile.txt");
  getline(file, s);
  for (auto it : s) {
    if (it != ' ')
      res += it;
  }
  file.close();
  cout << res << endl;
  return 0;
}

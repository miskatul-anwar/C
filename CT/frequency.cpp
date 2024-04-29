#include <bits/stdc++.h>
using namespace std;

int main() {
  unordered_map<char, int> check;
  string s;
  cin >> s;
  for (auto it : s) {
    check[it]++;
  }
  for (auto it : check) {
    if (it.second % 2 != 0) {
      cout << it.first << " ";
    }
  }
  cout << endl;
  return 0;
}

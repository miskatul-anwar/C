#include <bits/stdc++.h>
using namespace std;

int main() {
  string s1 = "abc abc duf lsfl", s2 = "data abc science is popular", word;
  int cnt = 0, cnt1 = 0, cnt2 = 0;
  vector<string> v1, v2;
  stringstream ss1(s1), ss2(s2);
  while (ss1 >> word) {
    v1.push_back(word);
    cnt1++;
  }
  while (ss2 >> word) {
    v2.push_back(word);
    cnt2++;
  }
  for (auto x : v1) {
    for (auto y : v2) {
      if (x == y) {
        cnt++;
      }
    }
  }
  cout << (double)cnt / (double)(sqrt(cnt1) * sqrt(cnt2)) << endl;
  return 0;
}

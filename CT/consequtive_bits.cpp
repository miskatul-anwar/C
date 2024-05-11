
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  for (int i = 0; i < s.size() - 1; i += 2) {
    if (s[i] == '0' and s[i + 1] == '1') {
      swap(s[i], s[i + 1]);
    } else if (s[i] == '1' && s[i + 1] == '0') {
      swap(s[i], s[i + 1]);
    }
  }
  cout << s << endl;
  return 0;
}

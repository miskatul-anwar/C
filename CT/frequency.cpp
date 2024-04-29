#include <bits/stdc++.h>
#define fast                                                                   \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);

using namespace std;
typedef long long ll;

class Solution {
private:
  void frequency_check_odd(string s) {
    unordered_map<char, ll> check;
    for (auto it : s) {
      check[it]++;
    }
    for (auto it : check) {
      if (it.second % 2 != 0) {
        cout << it.first << " ";
      }
    }
    return;
  }

public:
  void solve() {
    string s;
    getline(cin, s);
    frequency_check_odd(s);
    return;
  }
};

int main() {
  Solution s;
  s.solve();
  return 0;
}

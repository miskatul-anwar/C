#include "bits/stdc++.h"
#define performance                                                            \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

typedef long long ll;
using namespace std;

class Solution {
private:
  ll sum(ll x, ll y) { return x + y; }

public:
  void interface(void) {
    ll x, y;
    cin >> x >> y;
    cout << sum(x, y) << endl;
  }
};

int main(void) {
  performance;
  Solution().interface();
  return 0;
}

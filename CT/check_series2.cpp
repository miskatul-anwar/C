#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll f(ll a, ll n);

int main() {
  ll a, n;
  cin >> a >> n;
  cout << f(a, n) << endl;
  return 0;
}

ll f(ll a, ll n) {
  ll sum = 0;
  for (int i = 0; i <= n; ++i) {
    sum += (a - i) * (a - i);
  }
  return sum;
}

#include "bits/stdc++.h"
typedef long long ll;
using namespace std;

ll f(ll n);
bool Check(ll x);

int main() {
  ll x;
  cin >> x;
  cout << Check(x) << endl;
  return 0;
}

ll f(ll n) {
  if (n == 0) {
    return 1;
  }
  return n * f(n - 1) + n;
}

bool Check(ll x) {
  for (ll i = 0; i < sizeof(ll); i++) {
    if (f(i) == x) {
      goto found;
    }
  }
  return false;
found:
  return true;
}

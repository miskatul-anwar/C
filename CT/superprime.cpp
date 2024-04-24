#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n);
bool isSuperPrime(int n);
int main(void) {
  int n;
  cin >> n;
  isSuperPrime(n) ? cout << "Super Prime" : cout << "Not Super Prime";
  return 0;
}
bool isPrime(int n) {
  if (n == 1) {
    return false;
  }
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}
bool isSuperPrime(int n) {
  while (n /= 10) {
    if (!isPrime(n)) {
      return false;
    }
  }
  return true;
}

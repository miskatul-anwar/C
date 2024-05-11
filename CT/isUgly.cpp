#include "bits/stdc++.h"
using namespace std;

vector<int> prime_factors(int number);
bool isUgly(int number);

int main() {
  int n;
  cin >> n;
  isUgly(n) ? cout << "Yes" : cout << "No";
  return 0;
}

vector<int> prime_factors(int number) {
  vector<int> pf;
  if (number <= 1) {
    pf.push_back(number);
    return pf;
  }
  while (number % 2 == 0) {
    pf.push_back(2);
  }
  for (int i = 3; i <= sqrt(number); i += 2) {
    if (number % i == 0) {
      pf.push_back(i);
    }
  }
  return pf;
}
bool isUgly(int number) {
  vector<int> pf = prime_factors(number);
  for (auto p : pf) {
    if (p == 2 or p == 3 or p == 5) {
      goto check;
    }
  }
  return false;
check:
  return true;
}

#include "bits/stdc++.h"
using namespace std;

vector<int> primeFactors(int number);
bool isKsmooth(int number, int k);

int main(void) {
  int x, k;
  cin >> x >> k;
  if (isKsmooth(x, k)) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}

vector<int> primeFactors(int number) {
  vector<int> primeSeries;
  while (number % 2 == 0) {
    primeSeries.push_back(2);
    number /= 2;
  }
  int it = 3;
  while (number > 1 and it * it <= number) {
    if (number % it == 0) {
      primeSeries.push_back(it);
    } else {
      it += 2;
    }
  }
  if (number > 1) {
    primeSeries.push_back(number);
  }
  return primeSeries;
}

bool isKsmooth(int number, int k) {
  vector<int> primeSeries = primeFactors(number);
  for (auto it : primeSeries) {
    if (it > k) {
      return false;
    }
  }
  return true;
}

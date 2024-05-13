#include "bits/stdc++.h"
#include <cstdlib>
using namespace std;
inline int sum(int m, int n) { return m + n; }
inline int fibonacci(int x) {
  if (x <= 1)
    return x;
  return fibonacci(x - 1) + fibonacci(x - 2);
}
int main() {
  cout << sum(5, 6) << endl;
  cout << fibonacci(5) << endl;
  EXIT_SUCCESS;
}

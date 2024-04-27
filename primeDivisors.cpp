#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
  bool isPrime(int n) {
    if (n <= 1) {
      return false;
    }
    for (int i = 2; i * i <= n; i++) {
      if (n % i == 0) {
        return false;
      }
    }
    return true;
  }

  vector<int> primeDivisors(int number) {
    vector<int> divisors;
    for (int i = 2; i <= sqrt(number); i++) {
      if (number % i == 0) {
        if (isPrime(i)) {
          divisors.emplace_back(i);
        }
        int quotient = number / i;
        if (isPrime(quotient) and quotient != i) {
          divisors.emplace_back(quotient);
        }
      }
    }
    return divisors;
  }

public:
  void showOutput(void) {
    int number;
    cin >> number;
    vector<int> divisors = primeDivisors(number);
    if (divisors.empty()) {
      cout << "There are no prime divisors for " << number << endl;
    } else {
      cout << "Prime divisors of " << number << " are: ";
      for (auto it : divisors) {
        cout << it << " ";
      }
      cout << endl;
    }
    return;
  }
};

int main(void) {
  Solution s;
  s.showOutput();
  return 0;
}

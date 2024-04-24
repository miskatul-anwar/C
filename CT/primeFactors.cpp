#include <bits/stdc++.h>
using namespace std;

vector<int> primeFactors(int number);
bool kSmooth(vector<int> &v, int k);
int main(void) {
  int num = 12;
  vector<int> v = primeFactors(num);
  for (auto it : v) {
    cout << it << " ";
  }
  return 0;
}

vector<int> primeFactors(int number) {
  vector<int> primeFactors;
  while (number % 2 == 0) {
    primeFactors.push_back(2), number /= 2;
  }
  int it = 3;
  while (number % it == 0 and it * it <= number) {
    if (number % it == 0) {
      primeFactors.push_back(it);
      number /= it;
    } else {
      it += 2;
    }
  }
  if (number > 1) {
    primeFactors.push_back(number);
  }
  return primeFactors;
}
bool kSmooth(vector<int> &v, int k);

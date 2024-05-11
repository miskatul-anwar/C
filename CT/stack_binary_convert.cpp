#include "bits/stdc++.h"
using namespace std;

stack<int> convert_binary(int n);

int main() {
  int n;
  cin >> n;
  stack<int> bin = convert_binary(n);
  while (!bin.empty()) {
    cout << bin.top();
    bin.pop();
  }
  cout << endl;
  return 0;
}

stack<int> convert_binary(int n) {
  stack<int> bin;
  while (n > 0) {
    bin.push(n % 2);
    n /= 2;
  }
  return bin;
}

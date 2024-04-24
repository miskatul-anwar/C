#include <bits/stdc++.h>
using namespace std;
int numberOfones(int n) {
  int count = 0;
  while (n) {
    n = n & (n - 1);
    count++;
  }
  return count;
}
int main(void) {
  int n;
  cin >> n;
  cout << (numberOfones(n) > 0 ? "There are one or more set bits " : "No");
  cout << numberOfones(n) << endl;
  return 0;
}

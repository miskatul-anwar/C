#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n;
  cin >> n;
  for (int i = n; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
      if (j == i) {
        cout << "# ";
      } else {
        cout << "* ";
      }
    }
    for (int j = 1; j <= n - i; j++) {
      if (j == n - i) {
        cout << "# ";
      } else {
        cout << "* ";
      }
    }
    cout << endl;
  }
  return 0;
}

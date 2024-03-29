#include <bits/stdc++.h>
using namespace std;
int main(void) {
  float a, b, c, result;
  cout << "Enter 3 numbers:" << endl;
  cin >> a >> b >> c;
  result = cbrt(pow(a, 3) + pow(b, 3) + pow(c, 3));
  cout << "The result is: " << result << endl;
  return 0;
}

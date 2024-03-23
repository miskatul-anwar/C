#include <bits/stdc++.h>
using namespace std;
int main(void) {
  string s = "123";
  do {
    cout << s << endl;
  } while (next_permutation(s.begin(), s.end()));
  cout << "======================" << endl;
  for (string ::iterator i = s.begin(); i != s.end(); i++)
    while (next_permutation(i, s.end()))
      cout << s << endl;
  return 0;
}

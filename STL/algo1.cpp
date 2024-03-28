#include <bits/stdc++.h>
using namespace std;
int main(void) {
  vector<int> v = {1, 2, 3, 4, 5, 5, 6, 66, 7, 7, 77, 4, 3, 3, 3,
                   4, 5, 5, 4, 3, 4, 5, 4,  3, 4, 6,  4, 3, 4, 5};
  int i;
  cout << "Enter a number to find: ";
  cin >> i;
  cout << i << " appears " << count(v.begin(), v.end(), i) << " Times in v"
       << endl;
  ;
  return 0;
}

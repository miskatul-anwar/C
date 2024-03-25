#include <bits/stdc++.h>
#include <sstream>
using namespace std;
int main(void) {
  int count = 0;
  float smc;
  string x, y, eachword1, eachword2;
  list<string> l1, l2;
  cout << "x"
       << " = ";
  cin >> x;
  cout << "y"
       << " = ";
  cin >> y;
  cout << endl;
  stringstream s1(x), s2(y);
  while (s1 >> eachword1) {
    l1.push_back(eachword1);
  }
  while (s2 >> eachword2) {
    l2.push_back(eachword2);
  }
  count = 0;
  for (auto i : l1) {
    for (auto j : l2) {
      if (i == j) {
        count++;
      }
    }
  }
  smc = (float)count / l1.size();
  cout << "Similarity: " << smc << endl;
  return 0;
}

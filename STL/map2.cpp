#include "bits/stdc++.h"
using namespace std;
int main(void) {
  map<char, int> m;
  for (char ch = 'a'; ch <= 'z'; ++ch) {
    m.insert(make_pair('a' + 1, ch));
  }
  char ch;
  cout << "Enter a key:" << endl;
  cin >> ch;
  map<char, int>::iterator p;
  p = m.find(ch);
  if (p != m.end()) {
    cout << p->second << endl;
  } else {
    cout << "Key not found" << endl;
  }
  cout << m['d'] << endl;
  return 0;
}

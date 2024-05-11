#include "bits/stdc++.h"
using namespace std;

bool isValid(string &s);

int main() {
  string s;
  cin >> s;
  isValid(s) ? cout << "YES" << endl : cout << "NO" << endl;
  return 0;
}

bool isValid(string &s) {
  string bitstring;
  for (auto it : s) {
    if (it == '<' or it == '[' or it == '{' or it == '(') {
      bitstring += '1';
    } else {
      bitstring += '0';
    }
  }
  for (int i = 1; i < bitstring.size() - 1; i++) {
    if (bitstring[0] != '1') {
      goto notvalid;
    } else if (i % 2 == 0 and bitstring[i] != '1') {
      goto notvalid;
    } else if (i % 2 == 1 and bitstring[i] != '0') {
      goto notvalid;
    }
  }
  return true;
notvalid:
  return false;
}

/*
17. Write a program in C to remove characters from a string except alphabets.
Test Data :
Input the string : w3resource.com
*/

#include "bits/stdc++.h"
using namespace std;
int main() {
  string str, res;
  cin >> str;
  for (auto it : str) {
    isalpha(it) ? res += it : res;
  }
  cout << res << endl;
  return 0;
}

#include "bits/stdc++.h"
#include <algorithm>
#include <iostream>
using namespace std;
int main(void) {
  puts("Enter a line of text :");
  string s;
  getline(cin, s);
  sort(s.begin(), s.end());
  cout << "Sorted lines:" << s << endl;
  string t = s;
  cout << "Permutations: " << endl;
  int count = 0;
  do {
    count++;
    next_permutation(s.begin(), s.end());
    cout << s << " ";
  } while (s != t);
  cout << "Total permutations : " << count << endl;
  return 0;
}

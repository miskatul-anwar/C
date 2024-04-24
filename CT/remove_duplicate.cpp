#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string input);

int main(void) {
  string output = removeDuplicates("azxxzy");
  cout << output << endl;
  return 0;
}

string removeDuplicates(string input) {
  map<char, int> m;
  string output;
  for (auto it : input) {
    m[it]++;
  }
  for (auto it : m) {
    if (it.second == 1) {
      output += it.first;
    }
  }
  return output;
}

#include "bits/stdc++.h"
using namespace std;

class Solution {
public:
  bool SimmilarityCheck(string s1, string s2) {
    stack<char> st1, st2;
    for (auto c : s1) {
      if (c != '#') {
        st1.push(c);
      }
    }
    for (auto c : s2) {
      if (c != '#') {
        st2.push(c);
      }
    }
    while (!st1.empty() and !st2.empty()) {
      if (st1.size() != st2.size()) {
        return false;
      } else if (st1.top() != st2.top()) {
        return false;
      }
      st1.pop(), st2.pop();
    }
    return true;
  }
};

int main(void) {
  string s1, s2;
  getline(cin, s1), getline(cin, s2);
  Solution s;
  s.SimmilarityCheck(s1, s2) ? cout << "True" << endl : cout << "False" << endl;
  return 0;
}

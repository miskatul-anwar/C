#include <bits/stdc++.h>
using namespace std;
int main(void) {
  string s1, s2;
  getline(cin, s1), getline(cin, s2);
  stack<char> st1, st2;
  for (int i = 0; i < s1.size(); i++) {
    if (!st1.empty() && s1[i] == '#') {
      st1.pop();
    } else {
      st1.push(s1[i]);
    }
  }
  for (int i = 0; i < s2.size(); i++) {
    if (!st2.empty() && s2[i] == '#') {
      st2.pop();
    } else {
      st2.push(s2[i]);
    }
  }
  int flag = 0;
  while (!st1.empty() && !st2.empty()) {
    if (st1.top() != st2.top()) {
      flag++;
    }
    st1.pop(), st2.pop();
  }
  flag == 0 ? cout << "True" << endl : cout << "False" << endl;
  return 0;
}

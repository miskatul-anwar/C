#include <bits/stdc++.h>
#include <cstdlib>
#include <queue>
using namespace std;
bool check_string(string s1, string s2);
int main(void) {
  string s1, s2;
  getline(cin, s1), getline(cin, s2);
  if (check_string(s1, s2)) {
    cout << "True" << endl;
  } else {
    cout << "False" << endl;
  }
  EXIT_SUCCESS;
}
bool check_string(string s1, string s2) {
  queue<char> q1, q2;
  for (auto it : s1) {
    if (!q1.empty() and it == '#') {
      q1.pop();
    } else {
      q1.push(it);
    }
  }
iterate:
  if (!q1.empty() and !q2.empty()) {
    if (q1.front() != q2.front()) {
      return false;
    }
    q1.pop(), q2.pop();
    goto iterate;
  }
  return q1.empty() and q2.empty();
}

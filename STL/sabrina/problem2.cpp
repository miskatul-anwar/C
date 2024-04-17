#include "bits/stdc++.h"
using namespace std;
int main(void) {
  string s;
  cout << "Enter your string: ";
  getline(cin, s);
  queue<char> q;
  for (int i = 0; i < s.size(); i++) {
    if (!q.empty() and q.front() == s[i]) {
      q.pop();
    } else {
      q.push(s[i]);
    }
  }
  if (q.empty()) {
    cout << "The queue is empty";
  } else {
    while (!q.empty()) {
      cout << q.front();
      q.pop();
    }
  }
  return 0;
}

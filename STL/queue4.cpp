#include "bits/stdc++.h"
using namespace std;
int main(void) {
  string input = "Technical Interview Preparation", eachword;
  queue<string> q;
  vector<string> v;
  stringstream ss(input);

  while (ss >> eachword) {
    v.emplace_back(eachword);
  }
  for (int i = v.size() - 1; i >= 0; i--) {
    q.push(v[i]);
  }
  while (!q.empty()) {
    cout << q.front() << " ";
    q.pop();
  }
  cout << endl;
  return 0;
}

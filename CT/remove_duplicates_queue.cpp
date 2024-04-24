#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string input);

int main(void) {
  string output = removeDuplicates("azxxzy");
  cout << output << endl;
  return 0;
}

string removeDuplicates(string input) {
  queue<char> q;
  string output;
  vector<char> checklist;
  for (auto it : input) {
    int cnt = count(input.begin(), input.end(), it);
    if (cnt == 1) {
      q.push(it);
    }
  }
  while (!q.empty()) {
    output += q.front();
    q.pop();
  }

  return output;
}

#include <bits/stdc++.h>
using namespace std;
int main() {
  queue<int> q;
  q.push(1), q.push(2), q.push(3);
  cout << q.front() << endl; // 1
  q.front() += 5;
  cout << q.back() << endl; // 3+5
  return 0;
}

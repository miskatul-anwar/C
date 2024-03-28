#include <bits/stdc++.h>
#include <queue>
using namespace std;
int main(void) {
  priority_queue<int> pq;
  pq.push(21), pq.push(22), pq.push(24), pq.push(25);
  pq.pop();
  while (!pq.empty()) {
    cout << pq.top() << endl;
    pq.pop();
  }
  return 0;
}

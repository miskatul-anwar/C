#include "bits/stdc++.h"
using namespace std;
int fired(int a, int b, int c);
int main(void) {
  int a, b, c;
  cin >> a >> b >> c;
  cout << fired(a, b, c) << endl;
  return 0;
}
int fired(int a, int b, int c) {
  priority_queue<int> pq;
  pq.emplace(a), pq.emplace(b), pq.emplace(c);
  pq.pop();
  return pq.top();
}

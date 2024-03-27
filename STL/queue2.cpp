#include "bits/stdc++.h"
using namespace std;
int main(void) {
  queue<int> q1, q2;
  q1.push(1), q1.push(2), q1.push(3), q1.push(4);
  q2.push(3), q2.push(5), q2.push(7), q2.push(9);
  q1.swap(q1);
  cout << "q1 :";
  while (!q1.empty()) {
    cout << " " << q1.front() << " ";
    q1.pop();
  }
  cout << endl;
  cout << "q2 :";
  while (!q2.empty()) {
    cout << " " << q2.front() << " ";
    q2.pop();
  }
  cout << endl;
  return 0;
}

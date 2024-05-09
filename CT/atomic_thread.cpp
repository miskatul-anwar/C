#include <bits/stdc++.h>
using namespace std;

atomic<int> x(0);
void increment() {
  for (int i = 0; i < 100; i++) {
    x++;
  }
}
int main() {
  thread t1(increment);
  thread t2(increment);
  t1.join(), t2.join();
  cout << x << endl;
}

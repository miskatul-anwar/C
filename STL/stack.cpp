#include "iostream"
#include <stack>
using namespace std;
int main(void) {
  stack<int> s;
  s.push(1);
  s.emplace(2);
  s.push(3);
  cout << s.top() << endl;
  return 0;
}

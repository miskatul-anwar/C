#include <iostream>
#include <list>
using namespace std;
int main(void) {
  list<string> lines = {"a", "b", "c", "d", "e", "f", "g"};
  for (string line : lines) {
    cout << line << endl;
  }
  lines.reverse();
  cout << endl;
  for (string line : lines) {
    cout << line << endl;
  }
  return 0;
}

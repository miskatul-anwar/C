#include "iostream"
#include <vector>
using namespace std;
int main(void) {
  vector<int> v(10, 12);
  // This is practice for iterators ➿
  for (vector<int>::iterator j = v.begin(); j != v.end(); j++) {
    cout << *j << " ";
  }
  cout << endl;
  for (vector<int>::iterator j = v.end(); j != v.begin(); j--) {
    cout << *j << " ";
  }
  return 0;
}

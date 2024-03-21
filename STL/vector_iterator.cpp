#include "iostream"
#include <vector>
using namespace std;
int main(void) {
  vector<int> v(10, 12);
  // This is practice for iterators ➿
  for (vector<int>::iterator j = v.begin(); j != v.end(); j++) {
    cout << *j << endl;
  }
}

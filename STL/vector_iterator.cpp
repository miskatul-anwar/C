#include "iostream"
#include <vector>
using namespace std;
int main(void) {
  // vector<int> v(10, 12);
  //  This is practice for iterators ➿
  vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  for (vector<int>::iterator j = v.begin(); j != v.end(); j++) {
    cout << *j << " ";
  }
  cout << endl;
  for (auto j = v.rbegin(); j != v.rend(); j++) {
    cout << *j << " ";
  }
  cout << endl;
  return 0;
}

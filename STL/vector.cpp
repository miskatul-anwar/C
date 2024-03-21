#include "iostream"
#include <vector>
using namespace std;
int main(void) {
  vector<int> v;
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  for (int num : v) {
    cout << num << endl;
  }
  vector<int>::const_iterator it;
  for (it = v.begin(); it != v.end(); it++) {
    cout << *it << endl;
  }
  return 0;
}

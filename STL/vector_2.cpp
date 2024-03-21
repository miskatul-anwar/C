#include "iostream"
#include <vector>
using namespace std;
int main(void) {
  vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  for (auto i : v) {
    cout << i << " ";
  }
  cout << endl;
  v.erase(v.begin() + 3); // This +3 stands for the 3rd index
  for (auto i : v) {
    cout << i << " ";
  }
  cout << endl;
  v.insert(v.begin(), 10);
  v.insert(v.begin() + 1, 50, 10);
  for (auto i : v) {
    cout << i << " ";
  }
  return 0;
}

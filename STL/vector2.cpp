#include "iostream"
#include <vector>
using namespace std;
int main(void) {
  vector<int> v1;
  v1.push_back(1);
  v1.push_back(2);
  v1.push_back(3);
  vector<pair<int, int>> v2;
  vector<int> v3(5,
                 100); //->A container containing 5 instances of 100 is defined
  for (int i = 0; i < 5; ++i) {
    cout << v3[i] << endl;
  }
  vector<int> v5(v3);
  for (int i = 0; i < v5.size(); ++i) {
    cout << v5[i] << endl;
  }
  vector<int> v4(5);
}

#include "iostream"
#include <vector>
using namespace std;
int main(int argc, char **argv) {
  vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // <---vector
  cout << v[0] << endl;
  v.push_back(10);
  v.emplace_back(11);
  v.emplace_back(12, 13);
}

#include <bits/stdc++.h>
using namespace std;
int main(void) {
  vector<int> v = {1, 2, 3, 2};
  cout << "V contains: " << endl;
  for (size_t s = 0; s < v.size(); ++s) {
    cout << v[s] << " ";
  }
  cout << endl;
  cout << "The sum of the elements in v is :"
       << accumulate(v.begin(), v.end(), 0) << endl;
  cout << "The inner product of the elements in v is :"
       << inner_product(v.begin(), v.end(), v.begin(), 0) << endl;
  return 0;
}

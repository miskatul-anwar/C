#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<int> x = {1, 2, 3, 7, 1, 6, 9};
  sort(x.begin(), x.end());
  int target, flag = 0;
  cin >> target;
  int it1 = 0, it2 = x.size() - 1;
  for (; it1 < x.size() and it2 >= 0;) {
    if (x[it1] + x[it2] == target) {
      goto found;
    } else if (x[it1] + x[it2] > target) {
      it2--;
    } else {
      it1++;
    }
  }
  cout << "impossible" << endl;
found:
  cout << x[it1] << " " << x[it2] << endl;
  return 0;
}

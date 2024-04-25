#include "bits/stdc++.h"
using namespace std;

vector<vector<int>> generate_permutations(vector<int> &array) {
  vector<vector<int>> ans;
  sort(array.begin(), array.end());
  do {
    ans.push_back(array);
  } while (next_permutation(array.begin(), array.end()));
  return ans;
}

int main(void) {
  vector<int> perm = {1, 2, 3, 4, 5};
  vector<vector<int>> ans = generate_permutations(perm);
  for (auto it : ans) {
    for (auto itt : it) {
      cout << itt << " ";
    }
    cout << endl;
  }
  return 0;
}

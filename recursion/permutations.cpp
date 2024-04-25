#include "bits/stdc++.h"
#include <vector>
using namespace std;

vector<vector<int>> ans;
void permute(vector<int> &a, int idx) {
  if (idx == a.size()) {
    ans.push_back(a);
    return;
  }
  for (int i = 0; i < a.size(); i++) {
    swap(a[i], a[idx]);
    permute(a, idx + 1);
    swap(a[i], a[idx]);
  }
}
int32_t main(void) {}

#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;
  vector<vector<int>> v(N);
  for (int i = 0; i < N; i++) {
    int row;
    cin >> row;
    vector<int> temp;
    for (int j = 0; j < row; j++) {
      int x;
      cin >> x;
      temp.push_back(x);
    }
  }
  for (auto it : v) {
    for (auto it2 : it) {
      cout << it2 << " ";
    }
    cout << endl;
  }
  return 0;
}

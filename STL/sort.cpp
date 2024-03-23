#include <bits/stdc++.h>
using namespace std;
int main(void) {
  vector<int> A = {1, 2, 353, 3, 2, 4, 5322, 121, 46, 3, 21};
  sort(A.begin(), A.end());
  for (auto i : A)
    cout << i << endl;
  unordered_map<char, int> M = {
      {'F', 12}, {'A', 1}, {'G', 9}, {'H', 8}, {'I', 5},
  };
  cout << "\n\n\n";
  for (auto i : M)
    cout << i.first << " : " << i.second << "\n";
  return 0;
}

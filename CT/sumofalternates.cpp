
#include <bits/stdc++.h>
using namespace std;

pair<int, int> ALTERSUM(const vector<vector<int>> &matrix) {
  int n = matrix.size();
  int sum1 = 0;
  int sum2 = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if ((i + j) % 2 == 0) {
        sum1 += matrix[i][j];
      } else {
        sum2 += matrix[i][j];
      }
    }
  }

  return {sum1, sum2};
}

int main() {
  // Given matrix (3x3)
  vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  pair<int, int> sums = ALTERSUM(matrix);
  cout << "Sum of alternate elements 1: " << sums.first << endl;
  cout << "Sum of alternate elements 2: " << sums.second << endl;

  return 0;
}

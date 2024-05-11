#include <bits/stdc++.h>
using namespace std;

bool isMagicSquare(const vector<vector<int>> &matrix) {
  int n = matrix.size();
  int sum = 0;
  for (int j = 0; j < n; ++j) {
    sum += matrix[0][j];
  }
  for (int i = 1; i < n; ++i) {
    int rowSum = 0;
    for (int j = 0; j < n; ++j) {
      rowSum += matrix[i][j];
    }
    if (rowSum != sum) {
      return false;
    }
  }
  for (int j = 0; j < n; ++j) {
    int colSum = 0;
    for (int i = 0; i < n; ++i) {
      colSum += matrix[i][j];
    }
    if (colSum != sum) {
      return false;
    }
  }
  int diagSum = 0;
  for (int i = 0; i < n; ++i) {
    diagSum += matrix[i][i];
  }
  if (diagSum != sum) {
    return false;
  }
  int secDiagSum = 0;
  for (int i = 0; i < n; ++i) {
    secDiagSum += matrix[i][n - 1 - i];
  }
  if (secDiagSum != sum) {
    return false;
  }
  return true;
}

int main() {
  // Example matrix (3x3)
  vector<vector<int>> matrix = {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}};
  if (isMagicSquare(matrix)) {
    cout << "The matrix is a magic square." << endl;
  } else {
    cout << "The matrix is not a magic square." << endl;
  }

  return 0;
}

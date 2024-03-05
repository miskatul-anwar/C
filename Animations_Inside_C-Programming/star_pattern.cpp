#include "iostream"
using namespace std;
int main(void) {
  int row, col;
  const int n = 8;
  for (row = 1; row <= n; row++) {
    for (col = 1; col <= n - row; col++) {
      cout << "   ";
    }
    for (col = 1; col <= 2 * row - 1; col++) {
      cout << " * ";
    }
    cout << endl;
  }
  for (row = n - 1; row >= 1; row--) {
    for (col = 1; col <= n - row; col++) {
      cout << "   ";
    }
    for (col = 1; col <= 2 * row - 1; col++) {
      cout << " * ";
    }
    cout << endl;
  }
}

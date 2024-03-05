#include "iostream"
using namespace std;
int main(void) {
  int x;
  cin >> x;
  for (int i = 1; i <= x; i++) {
    for (int j = x - i; j > 0; j--) {
      cout << " ";
    }
    for (int j = 1; j <= x; j++) {
      if (i == 1 || i == x || j == 1 || j == x) {
        cout << " * ";
      } else {
        cout << "   ";
      }
    }
    cout << endl;
  }
}

#include "iostream"
using namespace std;
int main(void) {
  int x;
  cout << "Enter the number of rows: ";
  cin >> x;
  //--> This is a very special pattern that will print Butterfly
  /*      *
   **    **
   ***  ***
   ********
   ********
   ***  ***
   **    **
   *      */
  for (int i = 1; i <= x; i++) {
    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    int space = 2 * x - 2 * i; //==> 2*n-2*Row --> " "
    for (int j = 1; j <= space; j++) {
      cout << " ";
    }
    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = x; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    int space = 2 * x - 2 * i;
    for (int j = 1; j <= space; j++) {
      cout << " ";
    }
    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}

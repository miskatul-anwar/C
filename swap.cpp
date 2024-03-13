#include "iostream"

using namespace std;
void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main(void) {
  int x = 5;
  cout << "x = " << x << endl;
  int y = 6;
  cout << "y = " << y << endl;
  swap(&x, &y);
  cout << "x = " << x << endl;
  cout << "y = " << y;
}

//--> simple pascal's pyramid
#include "iostream"
#include "iomanip"
using namespace std;

int main(void) {
  int row = 5, i, j, space, coef = 1;

  for (i = 0; i < row; i++) {
    for (space = 1; space <= row - i; space++) {
      cout << "  ";  
    }

    for (j = 0; j <= i; j++) {
      if (j == 0 || i == 0) {
        coef = 1;
      } else {
        coef = coef * (i - j + 1) / j;
      }

      cout << setw(4) << coef;
    }

    cout << endl;
  }
  
  exit(1);

}


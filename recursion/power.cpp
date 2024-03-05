#include "cstdio"
#include "cstdlib"
#include "iostream"
using namespace std;

/*
 * Miskatul Anwar
 * ID: 23701053
 */

int power(int n, int exponent) {
  if (exponent == 0) {
    return 1;
  } else if (exponent % 2 == 0) {
    int result = power(n, exponent / 2);
    return result * result;
  } else {
    return n * power(n, exponent - 1);
  }
}

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int exponent = atoi(argv[2]);
  cout << n << "^" << exponent << " = " << power(n, exponent) << endl;
  return 0;
}

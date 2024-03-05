/*
 * Miskatul Anwar
 * ID: 23701053
 */

#include "cstdio"
#include "iostream"
using namespace std;
int factorial(int n);

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  cout << "factorial of " << n << " is " << factorial(n) << endl;
  return 0;
}

int factorial(int n) {
  if (n == 1) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

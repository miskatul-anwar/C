#include "cstdio"
#include "iostream"
using namespace std;

// declaration statements
int tribonacci(int n);
void loop(int n);

// program body
int main(int argc, char **argv) {
  static int n = atoi(*(argv + 1));
  loop(n);
  return 0;
}

// tribonacci function
int tribonacci(int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1 || n == 2) {
    return 1;
  } else {
    return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
  }
}

// incremental loop using recursive function
void loop(int n) {
  if (n < 0) {
    return;
  } else {
    loop(n - 1);
    cout << tribonacci(n) << " ";
    return;
  }
}

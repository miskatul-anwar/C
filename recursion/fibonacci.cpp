#include "iostream"
using namespace std;
int fibonacci(int n) {
  if (n == 0)
    return n;
  if (n == 1)
    return n;
  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  for (int i = 0; i < n; i++) {
    cout << fibonacci(i) << " ";
  }
  return 0;
}

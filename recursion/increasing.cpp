#include "cstdlib"
#include "iostream"
using namespace std;

void increasing_number(int n) {
  if (n == 0) {
    return;
  } else {
    increasing_number(n - 1);
    cout << n << endl;
    return;
  }
}

int main(int argc, char **argv) {
  int n = atoi(*(argv + 1));
  increasing_number(n);
  return 0;
}

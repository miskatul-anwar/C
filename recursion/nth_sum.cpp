#include "cstdlib"
#include "iostream"
using namespace std;
// this is a recursive program to calculate the nth sum
int nth_sum(int n);
int bar(int n);

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  // lets print the sum of the first n natural numbers
  for (int i = 0; i <= n; i++) {
    cout << i << " " << nth_sum(i) << endl;
  }
  bar(n);
  cout << endl;
  cout << "The sum of the first " << n << " natural numbers is: " << nth_sum(n)
       << endl;
  return 0;
}

// recursive function summing the first n natural numbers
int nth_sum(int n) {
  if (n == 0) {
    return 0;
  }
  return n + nth_sum(n - 1);
}
int bar(int n) {
  if (n == 0) {
    return 0;
  }
  cout << " * ";
  return bar(n - 1);
}

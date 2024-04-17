#include "bits/stdc++.h"
using namespace std;
__global__ loop(int t) {
iterate:
  if (t--) {
    int a = 0, b = 0;
    cout << a * b << endl;
    a++, b++;
    goto iterate;
  }
}
int main(void) {
  int t;
  cin >> t;
  loop<<<1, 1>>>(t);
  cudaDeviceSynchronize();
  cin >> t;
  loop(t);
  return 0;
}

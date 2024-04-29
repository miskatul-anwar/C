#include <bits/stdc++.h>
using namespace std;

double avarage(list<int> &array);

int main() {
  list<int> array = {1, 2, 3, 4, 5};
  cout << avarage(array) << endl;
  return 0;
}

double avarage(list<int> &array) {
  int sum = 0;
  for (auto i : array) {
    sum += i;
  }
  return (double)sum / array.size();
}

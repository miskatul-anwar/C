#include "bits/stdc++.h"
using namespace std;
int main(void) {
  vector<int> arr = {2, 45, 1, 21, 21, 34, 11, 2};
  for (int i = 0; i < arr.size() - 1; i++) {
    for (int j = i + 1; j < arr.size(); j++) {
      if (arr[j] < arr[i])
        swap(arr[j], arr[i]);
    }
  }
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  return 0;
}

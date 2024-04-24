#include <bits/stdc++.h>
using namespace std;
void subssets(vector<int> &array) {
  for (int i = 0; i < (1 << array.size()); i++) {
    for (int j = 0; j < array.size(); j++) {
      if (i & (1 << j)) {
        cout << array[j] << " ";
      }
    }
    cout << endl;
  }
}
int main() {
  vector<int> array = {1, 2, 3, 4};
  cout << "Subsets of array are : " << endl;
  subssets(array);
  return 0;
}

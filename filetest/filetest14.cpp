#include "bits/stdc++.h"
using namespace std;
int main(void) {
  string name;
  int i, n;
  cout << "Enter the number of students" << endl;
  cin >> n;
  FILE *f = fopen("student.txt", "w");
  for (i = 1; i <= n; i++) {
    getline(cin, name);
    fprintf(f, "%s\n", name.c_str());
  }
  fclose(f);
  return 0;
}

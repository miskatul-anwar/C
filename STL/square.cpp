#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
int main(int argc, char **argv) {

  // used variables 💁
  int n, i, j, l, x = atoi(argv[1]);
  string s;
  char c;

  // main program 💻
  fstream f("matrix.txt", ios::app); // open for appending
  if (!f.is_open()) {
    cout << "File not opened" << endl;
    EXIT_FAILURE;
  }
  for (l = 0; l < x; l++) {
    for (i = 0; i < l; i++) {
      for (j = 0; j < i; j++) {
        f << "* ";
      }
      f << endl;
    }
  }
  f.close();
  fstream newf("matrix.txt", ios::in);
  if (!newf.is_open()) {
    cout << "File not opened" << endl;
    EXIT_FAILURE;
  }
  while (newf.get(c)) {
    if (c == '\n') {
      cout << endl;
    } else {
      cout << c;
    }
  }
  newf.close();
  return 0;
}

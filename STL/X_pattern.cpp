#include "bits/stdc++.h"
using namespace std;
namespace fs = filesystem;
void pattern(int size, fstream &f);
int main(void) {
  fs::create_directory("X");
  fs::path path_to_pattern("X/pattern.txt");
  fstream f(path_to_pattern, ios::out);
  if (!f.is_open()) {
    cout << "Error: unable to open file" << endl;
    return 1;
  }
  pattern(5, f);
  return 0;
}

void pattern(int size, fstream &f) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (i == size / 2 and j == size / 2) {
        f << "X";
      } else if (i == j and j != size / 2) {
        f << "\\";
      } else if (i == size - 1 - j and j != size / 2) {
        f << "/";
      } else {
        f << "*";
      }
    }
    f << endl;
  }
}

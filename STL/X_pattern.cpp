#include "bits/stdc++.h"
using namespace std;
namespace fs = filesystem;
void X(int size, fstream &f);
int main(void) {
  fs::create_directory("X");
  fs::path path_to_pattern("X/pattern.txt");
  fstream f(path_to_pattern, ios::out);
  if (!f.is_open()) {
    cout << "Error: unable to open file" << endl;
    EXIT_FAILURE;
  }
  X(10, f);
  system("bat X/pattern.txt");
  EXIT_SUCCESS;
}
void X(int size, fstream &f) {
  for (int i = 0; i < size; ++i) {
    f << "X";
  }
}

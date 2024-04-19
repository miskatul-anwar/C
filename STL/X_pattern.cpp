#include "bits/stdc++.h"
using namespace std;
namespace fs = filesystem;
int main(void) {
  fs::create_directory("X");
  fs::path path_to_pattern("X/pattern.txt");
  fstream f(path_to_pattern, ios::out);
  if (!f.is_open()) {
    cout << "Error: unable to open file" << endl;
    return 1;
  }
  for (int i = 0; i < 10; ++i) {
    f << "X";
  }
  f.seekg(0, ios::beg);
  string pattern;
  while (getline(f, pattern)) {
    cout << pattern << endl;
  }
  f.close();
  return 0;
}

#include "bits/stdc++.h"
using namespace std;
namespace fs = filesystem;
void Pattern_X(ofstream &pattern_file, int size);
int main(void) {
  int size;
  fs::create_directory("Pattern_X");
  fs::path path_to_pattern("Pattern_X/pattern.txt");
  ofstream pattern_file(path_to_pattern);
  if (!pattern_file.is_open()) {
    cout << "Failed to create file 1" << endl;
    return -1;
  }
  cout << "Enter the size of pattern: " << endl;
  cin >> size;
  Pattern_X(pattern_file, size);
  pattern_file.close();
  ifstream read_file(path_to_pattern);
  if (!read_file.is_open()) {
    cout << "Failed to open file 2" << endl;
    return -1;
  }
  string line;
  while (getline(read_file, line)) {
    cout << line << endl;
  }
  return 0;
}
void Pattern_X(ofstream &pattern_file, int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (i == size / 2 and j == size / 2) {
        pattern_file << "X ";
      } else if (i == j and j != size / 2) {
        pattern_file << "\\ ";
      } else if (j == size - i - 1 and j != size / 2) {
        pattern_file << "/ ";
      } else {
        pattern_file << "* ";
      }
    }
    pattern_file << endl;
  }
}

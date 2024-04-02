#include <bits/stdc++.h>
using namespace std;
namespace fs = filesystem;

void star(int n, fstream &f);

int main(int argc, char **argv) {
  int n = atoi(argv[1]);
  fs::create_directory("star_pattern");
  fs::path filepath = "star_pattern/star.txt";
  fstream f(filepath, ios::out);
  if (!f.is_open()) {
    cout << "Failed to open file ! " << endl;
    EXIT_FAILURE;
  }
  star(n, f);
  EXIT_SUCCESS;
}

void star(int n, fstream &f) {
  int row, col;
  for (row = 1; row <= n; row++) {
    for (col = 1; col <= n - row; col++) {
      f << "   ";
    }
    for (col = 1; col <= 2 * row - 1; col++) {
      f << " * ";
    }
    f << endl;
  }
  for (row = n - 1; row >= 1; row--) {
    for (col = 1; col <= n - row; col++) {
      f << "   ";
    }
    for (col = 1; col <= 2 * row - 1; col++) {
      f << " * ";
    }
    f << endl;
  }
}

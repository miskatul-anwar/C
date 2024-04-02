#include "bits/stdc++.h"

using namespace std;
namespace fs = filesystem;

void butterfly(int size, fstream &f);

int main(int argc, char *argv[]) {
  int size = atoi(argv[1]);
  fs::create_directory("Butterfly");
  fs::path path_to_file("Butterfly/butterfly.txt");
  fstream f(path_to_file, ios::out);
  if (!f.is_open()) {
    cout << "File not opened" << endl;
    EXIT_FAILURE;
  }
  butterfly(size, f);
  f.close();
  EXIT_SUCCESS;
}

void butterfly(int size, fstream &f) {
  for (int i = 1; i <= size; i++) {
    for (int j = 1; j <= i; j++) {
      f << "*";
    }
    int space = 2 * size - 2 * i; //==> 2*n-2*Row --> " "
    for (int j = 1; j <= space; j++) {
      f << " ";
    }
    for (int j = 1; j <= i; j++) {
      f << "*";
    }
    f << endl;
  }
  for (int i = size; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
      f << "*";
    }
    int space = 2 * size - 2 * i;
    for (int j = 1; j <= space; j++) {
      f << " ";
    }
    for (int j = 1; j <= i; j++) {
      f << "*";
    }
    f << endl;
  }
}

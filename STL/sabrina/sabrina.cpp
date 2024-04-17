#include <bits/stdc++.h>
using namespace std;
namespace fs = filesystem;
int main(void) {
  string name = "Sabrina Ibnath";
  char c;
  int n = name.length();
  fs::create_directory("Sabrina");
  fs::path path("Sabrina/no.txt");
  fstream f(path, ios::out);
  f << name;
  EXIT_SUCCESS;
}

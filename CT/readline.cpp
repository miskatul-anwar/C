#include "bits/stdc++.h"
using namespace std;

int main() {
  ifstream file("test.txt");
  vector<string> lines;
  string line;
  while (getline(file, line)) {
    lines.push_back(line);
  }
  file.close();
  for (auto &line : lines) {
    cout << line << endl;
  }
  return 0;
}

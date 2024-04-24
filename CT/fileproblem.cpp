#include "bits/stdc++.h"
using namespace std;
int main(void) {
  ifstream f("oldmast.txt");
  string line;
  while (getline(f, line)) {
    vector<float> data;
    size_t pos = 0;
    if ((pos = line.find(" ")) != string::npos) {
      data.push_back(stof(line.substr(0, pos)));
      line.erase(0, pos + 1);
    }
    data.push_back(stof(line));
    for (auto i : data) {
      cout << i << " ";
    }
    cout << endl;
  }
  return 0;
}

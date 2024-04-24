#include "bits/stdc++.h"
using namespace std;
int main(void) {
  ifstream f("data.txt");
  string str;
  while (getline(f, str)) {
    size_t pos = 0;
    vector<int> data;
    int tmp = 0;
    while ((pos = str.find(" ")) != string::npos) {
      tmp = stoi(str.substr(0, pos));
      data.push_back(tmp);
      str.erase(0, pos + 1);
    }
    data.push_back(stoi(str));
    for (auto it : data) {
      cout << it << " ";
    }
    cout << endl;
  }
  return 0;
}

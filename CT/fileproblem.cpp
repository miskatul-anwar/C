#include "bits/stdc++.h"
using namespace std;
int main(void) {
  map<int, float> oldmast;
  map<int, float> trans;
  vector<int> log;
  ifstream f("oldmast.txt");
  string line;
  while (getline(f, line)) {
    size_t pos = 0;
    int temp;
    if ((pos = line.find(" ")) != string::npos) {
      temp = stoi(line.substr(0, pos));
      line.erase(0, pos + 1);
    }
    oldmast[temp] = stof(line);
  }
  f.close();

  ifstream g("trans.txt");
  while (getline(g, line)) {
    size_t pos = 0;
    int temp, rep = 0;
    if ((pos = line.find(" ")) != string::npos) {
      temp = stoi(line.substr(0, pos));
      auto it = trans.find(temp);
      if (it != trans.end()) {
        rep++;
      }
      line.erase(0, pos + 1);
    }
    if (rep) {
      trans[temp] += stof(line);
    } else {
      trans[temp] = stof(line);
    }
  }
  g.close();

  ofstream h("newmast.txt");
  ofstream i("log.txt");
  for (auto it : trans) {
    auto flag = oldmast.find(it.first);
    if (flag != oldmast.end()) {
      h << it.first << " " << oldmast[it.second] + it.second << endl;
    } else {
      i << "Unmatched Transaction for A/C No. " << it.first << endl;
    }
  }
  h.close(), i.close();
  return 0;
}

#include "bits/stdc++.h"
using namespace std;
int main(void) {
  ifstream f("data.txt");
  if (!f.is_open()) {
    return 1;
  }
  string line;
  map<int, vector<int>> datasets;
  while (getline(f, line)) {
    vector<int> vec;
    size_t pos = 0;
    while ((pos = line.find(' ')) != string::npos) {
      vec.push_back(stoi(line.substr(0, pos)));
      line.erase(0, pos + 1);
    }
    vec.push_back(stoi(line));
    datasets[vec[0]] = {vec[1], vec[2], vec[3], vec[4]};
  }
  f.close();
  ofstream temp("temp.txt");
  ofstream hum("hum.txt");
  ofstream rain("rain.txt");
  if (!temp.is_open() or !hum.is_open() or !rain.is_open()) {
    return 2;
  }
  temp << "ID Temperature" << endl, hum << "ID Humidity" << endl,
      rain << "ID Rainfall" << endl;
  for (auto it : datasets) {
    temp << it.first << "  " << it.second[1] << endl,
        hum << it.first << "  " << it.second[2] << endl,
        rain << it.first << "  " << it.second[3] << endl;
  }
  temp.close(), hum.close(), rain.close();
  return 0;
}

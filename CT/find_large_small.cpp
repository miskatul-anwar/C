#include "bits/stdc++.h"
using namespace std;

int main() {
  string str;
  map<int, string> freq;
  getline(cin, str);
  size_t pos = 0;
  while ((pos = str.find(' ')) != string::npos) {
    freq[str.substr(0, pos).size()] = str.substr(0, pos);
    str.erase(0, pos + 1);
  }
  freq[str.substr(0, pos).size()] = str.substr(0, pos);
  auto smallest = freq.begin();
  auto largest = freq.rbegin();
  cout << "Smallest SubString: " << smallest->second << endl;
  cout << "Largest SubString: " << largest->second << endl;
  return 0;
}

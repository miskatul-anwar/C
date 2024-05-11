#include "bits/stdc++.h"
using namespace std;

int main() {
  map<char, int> freq;
  ifstream file("test.txt");
  string tmp;
  while (getline(file, tmp)) {
    for (auto ch : tmp) {
      if (ch != ' ') {
        freq[ch]++;
      }
    }
  }
  // Print the frequencies 😎
  file.close();
  for (auto x : freq) {
    cout << x.first << " " << x.second << endl;
  }
  return 0;
}

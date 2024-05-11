#include "bits/stdc++.h"
using namespace std;

double cosine_similarity(const string &d1, const string &d2);

int main(void) {
  string d1 = "the best data science course", d2 = "data science is popular";
  cout << cosine_similarity(d1, d2) << endl;
  return 0;
}

double cosine_similarity(const string &d1, const string &d2) {
  map<string, int> md1, md2;
  size_t pos = 0;
  string word;
  string d1_copy = d1, d2_copy = d2;
  while ((pos = d1_copy.find(" ")) != string::npos) {
    word = d1_copy.substr(0, pos);
    md1[word]++;
    d1_copy.erase(0, pos + 1);
  }
  md1[d1_copy]++;

  pos = 0;
  while ((pos = d2_copy.find(" ")) != string::npos) {
    word = d2_copy.substr(0, pos);
    md2[word]++;
    d2_copy.erase(0, pos + 1);
  }
  md2[d2_copy]++;
  double dotProduct = 0, magnitude1 = 0, magnitude2 = 0;
  for (const auto &[word, freq] : md1) {
    dotProduct += freq * md2[word];
    magnitude1 += freq * freq;
  }
  for (const auto &[word, freq] : md2) {
    magnitude2 += freq * freq;
  }
  return dotProduct / (sqrt(magnitude1) * sqrt(magnitude2));
}

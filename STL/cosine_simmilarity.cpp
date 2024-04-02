#include "bits/stdc++.h"
using namespace std;

double cosineSimilarity(const string &str1, const string &str2) {
  vector<int> vec1(256, 0);
  vector<int> vec2(256, 0);

  for (char c : str1)
    vec1[c]++;

  for (char c : str2)
    vec2[c]++;

  double dotProduct = 0;
  double magnitude1 = 0;
  double magnitude2 = 0;
  for (int i = 0; i < 256; i++) {
    dotProduct += vec1[i] * vec2[i];
    magnitude1 += vec1[i] * vec1[i];
    magnitude2 += vec2[i] * vec2[i];
  }

  magnitude1 = sqrt(magnitude1);
  magnitude2 = sqrt(magnitude2);

  double cosineSimilarity = dotProduct / (magnitude1 * magnitude2);

  return cosineSimilarity;
}

int main() {
  string str1 = "abc";
  string str2 = "bcd";

  double similarity = cosineSimilarity(str1, str2);

  cout << "Cosine similarity between " << str1 << " and " << str2 << ": "
       << similarity << endl;

  return 0;
}

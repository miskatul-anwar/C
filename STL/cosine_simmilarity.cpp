#include "bits/stdc++.h"
using namespace std;

// Function to calculate cosine similarity between two strings
double cosineSimilarity(const string &str1, const string &str2) {
  // Convert strings into vectors of characters
  vector<int> vec1(256, 0); // Assuming ASCII characters
  vector<int> vec2(256, 0);

  // Count character occurrences in the first string
  for (char c : str1)
    vec1[c]++;

  // Count character occurrences in the second string
  for (char c : str2)
    vec2[c]++;

  // Calculate the dot product of the vectors
  double dotProduct = 0;
  double magnitude1 = 0;
  double magnitude2 = 0;
  for (int i = 0; i < 256; i++) {
    dotProduct += vec1[i] * vec2[i];
    magnitude1 += vec1[i] * vec1[i];
    magnitude2 += vec2[i] * vec2[i];
  }

  // Calculate the magnitudes
  magnitude1 = sqrt(magnitude1);
  magnitude2 = sqrt(magnitude2);

  // Calculate the cosine similarity
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

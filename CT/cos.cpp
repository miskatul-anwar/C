#include <bits/stdc++.h>

using namespace std;

double cosineSimilarity(string &str1, string &str2) {

  int len1 = str1.length();
  int len2 = str2.length();

  int dotProduct = 0;
  for (int i = 0; i < len1 && i < len2; i++) {
    if (str1[i] == str2[i]) {
      dotProduct++;
    }
  }

  int magnitude1 = sqrt(len1);
  int magnitude2 = sqrt(len2);

  double cosineSimilarity = (double)dotProduct / (magnitude1 * magnitude2);

  return cosineSimilarity;
}

int main() {
  string str1 = "the best data science course";
  string str2 = "data science is popular";

  double cosinesimilarity = cosineSimilarity(str1, str2);

  cout << cosinesimilarity;

  return 0;
}

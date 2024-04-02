#include <cmath>
#include <iostream>
using namespace std;

double cosineSimilarity(string str1, string str2) {
  // Calculate the dot product of the vectors
  double dotProduct = 0.0;
  for (int i = 0; i < str1.length(); i++) {
    if (str2[i] != ' ') {
      dotProduct += str1[i] * str2[i];
    }
  }

  // Calculate the magnitude of the vectors
  double mag1 = 0.0, mag2 = 0.0;
  for (int i = 0; i < str1.length(); i++) {
    if (str1[i] != ' ') {
      mag1 += pow(str1[i], 2);
    }
  }
  for (int i = 0; i < str2.length(); i++) {
    if (str2[i] != ' ') {
      mag2 += pow(str2[i], 2);
    }
  }

  // Calculate the cosine similarity
  double cosineSimilarity = dotProduct / sqrt(mag1 * mag2);

  return cosineSimilarity;
}

int main() {
  string str1, str2;
  cout << "Enter two strings: ";
  getline(cin, str1), getline(cin, str2);
  cout << "Cosine similarity of \"" << str1 << "\" and \"" << str2
       << "\" is: " << cosineSimilarity(str1, str2) << endl;
  return 0;
}

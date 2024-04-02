#include <bits/stdc++.h>
using namespace std;
int main(void) {
  map<int, float> oldMastData, transData;
  FILE *oldmast = fopen("oldmast.txt", "r");
  FILE *trans = fopen("trans.txt", "r");
  int account_number;
  float transaction_amount;

  // Reading data from the given files in the questin
  while (fscanf(oldmast, "%d %f", &account_number, &transaction_amount) !=
         EOF) {
    oldMastData[account_number] = transaction_amount;
  }
  while (fscanf(trans, "%d %f", &account_number, &transaction_amount) != EOF) {
    transData[account_number] = transaction_amount;
  }
  fclose(oldmast), fclose(trans);

  // Answering the question
  FILE *newmast = fopen("newmast.txt", "w");
  while (oldMastData.begin() != oldMastData.end()) {
  }
}

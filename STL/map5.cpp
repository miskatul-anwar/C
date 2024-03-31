#include <bits/stdc++.h>
using namespace std;
int main(void) {
  map<int, double> m = {
      {100, 348.17}, {300, 27.19}, {500, 0.00}, {700, -14.22}};
  FILE *f = fopen("oldmast.txt", "w");
  for (auto i = m.begin(); i != m.end(); i++) {
    fprintf(f, "\n%d %lf\n", i->first, i->second);
  }
  map<int, double> n = {{100, 27.14}, {300, 62.11}, {300, 83.89}, {400, 100.56},
                        {700, 80.78}, {700, 1.53},  {900, 82.17}};
  fclose(f);

  FILE *x = fopen("trans.txt", "w");
  for (auto i = n.begin(); i != n.end(); i++) {
    fprintf(x, "\n%d %lf\n", i->first, i->second);
  }
  fclose(x);

  // Open "oldmast.txt" for reading
  FILE *F = fopen("oldmast.txt", "r");
  if (F == NULL) {
    perror("Error opening oldmast.txt");
    return 1;
  }

  // Open "trans.txt" for reading
  FILE *X = fopen("trans.txt", "r");
  if (X == NULL) {
    perror("Error opening trans.txt");
    return 1;
  }

  // Open "log.txt" for writing
  FILE *logFile = fopen("log.txt", "w");
  if (logFile == NULL) {
    perror("Error opening log.txt");
    return 1;
  }

  // Read data from "oldmast.txt" and "trans.txt"
  map<int, double> oldMastData, transData;
  int accountNumber;
  double balance;

  // Read data from "oldmast.txt"
  while (fscanf(F, "%d %lf", &accountNumber, &balance) != EOF) {
    oldMastData[accountNumber] = balance;
  }
  fclose(F);

  // Read data from "trans.txt"
  while (fscanf(X, "%d %lf", &accountNumber, &balance) != EOF) {
    transData[accountNumber] += balance;
  }
  fclose(X);

  // Compare and process data
  for (auto it = oldMastData.begin(); it != oldMastData.end(); it++) {
    accountNumber = it->first;
    if (transData.find(accountNumber) != transData.end()) {
      double newBalance = it->second + transData[accountNumber];
      printf("Account %d: Old Balance=%.2lf, New Balance=%.2lf\n",
             accountNumber, it->second, newBalance);
      fprintf(logFile, "Account %d: Old Balance=%.2lf, New Balance=%.2lf\n",
              accountNumber, it->second, newBalance);
    } else {
      printf("Account %d not found in transaction data.\n", accountNumber);
      fprintf(logFile, "Account %d not found in transaction data.\n",
              accountNumber);
    }
  }

  // Close log file
  fclose(logFile);

  return 0;
}

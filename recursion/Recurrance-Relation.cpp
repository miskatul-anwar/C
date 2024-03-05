#include "cstdlib"
#include "iostream"
using namespace std;
float cost(int year, float rate, float current_cost);
int main(int argc, char *argv[]) {
  float rate = atof(argv[1]);
  float current_cost = atof(argv[2]);
  int year = atoi(argv[3]);
  float cost_after_year = cost(year, rate, current_cost);
  cout << "The price of fuel is " << cost_after_year << " after " << year
       << "years" << endl;
  return 0;
}
float cost(int year, float rate, float current_cost) {
  if (year == 1) {
    return current_cost;
  } else {
    return cost(year - 1, rate, current_cost * (1 + rate));
  }
}

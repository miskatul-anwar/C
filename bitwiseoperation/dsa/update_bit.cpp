#include "bits/stdc++.h"
using namespace std;
int update_bits(int val, int pos) { return (val & ~(1 << pos)) | (1 << pos); }
int main(void) { cout << update_bits(5, 1) << endl; }

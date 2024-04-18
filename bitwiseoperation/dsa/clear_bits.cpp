#include <bits/stdc++.h>
using namespace std;
int clear_bit(int val, int pos) { return val & (~(1 << pos)); }
int main(void) { cout << clear_bit(5, 2); }

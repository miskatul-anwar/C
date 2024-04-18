#include <bits/stdc++.h>
using namespace std;
int set_bit(int val, int pos);
int main(void) { cout << set_bit(5, 1) << endl; }
int set_bit(int val, int pos) { return (val | (1 << pos)); }

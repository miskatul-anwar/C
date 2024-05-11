#include "bits/stdc++.h"
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s1, s2;
    cin >> s1 >> s2;
    map<char, int> m1, m2;
    for (auto it : s1)
    {
      m1[it]++;
    }
    for (auto it : s2)
    {
      m2[it]++;
    }
    bool s_1 = 0, l_1 = 0, m_1 = 0, l_2 = 0, m_2 = 0, s_2 = 0;
    if (s1.find("M") != string::npos)
    {
      m_1 = true;
    }
    if (s1.find("L") != string::npos)
    {
      l_1 = true;
    }
    if (s1.find("S") != string::npos)
    {
      s_1 = true;
    }
    if (s2.find("M") != string::npos)
    {
      m_2 = true;
    }
    if (
  }
}

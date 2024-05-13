#include <iostream>
#include <string>
#include <vector>

using namespace std;

string longestCommonSubstring(string str1, string str2)
{
  int m = str1.length();
  int n = str2.length();

  vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
  int maxLen = 0;
  int endIndex = 0;

  for (int i = 1; i <= m; ++i)
  {
    for (int j = 1; j <= n; ++j)
    {
      if (str1[i - 1] == str2[j - 1])
      {
        dp[i][j] = dp[i - 1][j - 1] + 1;
        if (dp[i][j] > maxLen)
        {
          maxLen = dp[i][j];
          endIndex = i - 1;
        }
      }
      else
      {
        dp[i][j] = 0;
      }
    }
  }

  return str1.substr(endIndex - maxLen + 1, maxLen);
}

int main()
{
  string str1 = "abcdef";
  string str2 = "xbcdyf";

  cout << "Longest common substring: " << longestCommonSubstring(str1, str2) << endl;

  return 0;
}

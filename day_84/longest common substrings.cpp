class Solution
{
public:
     int longestCommonSubstr(string str1, string str2)
     {
          // your code here
          vector<vector<int>> dp(str1.size(), vector<int>(str2.size(), -1));
          int maxS = 0;
          for (int i = 0; i < str1.size(); i++)
          {
               for (int j = 0; j < str2.size(); j++)
               {
                    if (str1[i] == str2[j] && dp[i][j] == -1)
                    {
                         int k = i, l = j;
                         while (k < str1.size() && l < str2.size() && str1[k] == str2[l])
                         {
                              dp[k][l] = 1;
                              k++;
                              l++;
                         }
                         maxS = max(maxS, l - j);
                    }
               }
          }
          return maxS;
     }
};

// gfg
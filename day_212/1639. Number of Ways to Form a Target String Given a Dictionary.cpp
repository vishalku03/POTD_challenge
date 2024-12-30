class Solution
{
public:
     int numWays(vector<string> &words, string target)
     {
          int n = words.size();
          if (n == 0)
               return 0;
          int m = words[0].size();
          int targetLen = target.size();
          const int MOD = 1e9 + 7;

          vector<long long> dp(targetLen + 1, 0);

          dp[0] = 1;

          // refer to above comments in approach section
          for (int i = 0; i < m; i++)
          {
               unordered_map<char, int> presentChars;
               for (int j = 0; j < n; j++)
               {
                    presentChars[words[j][i]]++;
               }
               for (int i = targetLen; i >= 1; i--)
               {
                    if (presentChars[target[i - 1]])
                    {
                         dp[i] += (dp[i - 1] * presentChars[target[i - 1]]) % MOD;
                         dp[i] %= MOD;
                    }
               }
          }

          return dp[targetLen];
     }
};
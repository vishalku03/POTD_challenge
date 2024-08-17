class Solution
{
public:
     long long maxPoints(vector<vector<int>> &points)
     {
          const int n = points.size(), m = points[0].size();
          long long dp[m], l_max[m], r_max[m];
          for (int i = 0; i < m; i++)
               dp[i] = points[0][i];
          for (int i = 1; i < n; i++)
          {
               l_max[0] = dp[0];

               for (int i = 1; i < m; i++)
                    l_max[i] = max(l_max[i - 1], dp[i] + i);
               r_max[m - 1] = dp[m - 1] - m + 1;
               for (int i = m - 2; i > -1; i--)
                    r_max[i] = max(r_max[i + 1], dp[i] - i);
               for (int j = 0; j < m; j++)
                    dp[j] = points[i][j] + max(l_max[j] - j, r_max[j] + j);
          }
          return *max_element(dp, dp + m);
     }
};
// leetcode - 1937
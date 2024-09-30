class Solution
{
public:
     typedef long long ll;
     long long maxProduct(string str)
     {
          int n = str.length();
          ll ans = 1;

          str = "!" + str + "?";
          vector<ll> p(n + 2, 1);
          vector<ll> dp(n + 1, 0);
          dp[2] = 1;
          ll l = 1;
          ll r = 1;
          for (ll i = 1; i <= n; i++)
          {
               p[i] = max(0LL, min(r - i, p[l + (r - i)]));
               while (str[i - p[i]] == str[i + p[i]])
               {
                    p[i]++;
                    dp[i + p[i] - 1] = max(dp[i + p[i] - 1], (2 * p[i] - 1));
                    ans = max(ans, (2 * p[i] - 1) * dp[i - p[i]]);
               }
               ans = max(ans, (2 * p[i] - 1) * dp[i - p[i]]);
               dp[i] = max(dp[i], dp[i - 1]);
               if (i + p[i] > r)
               {
                    r = i + p[i], l = i - p[i];
               }
          }
          return ans;
     }
};

// leetcode - 1960
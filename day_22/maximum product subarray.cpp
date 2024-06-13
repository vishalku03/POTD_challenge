class Solution
{
public:
     long long maxProduct(vector<int> arr, int n)
     {
          long long ans = INT_MIN;
          long long p = 1;

          long long l = 1;
          for (int i = 0; i < n; i++)
          {
               p *= arr[i];
               l *= arr[n - 1 - i];
               ans = max(ans, p);
               ans = max(ans, l);
               if (arr[i] == 0)
                    p = 1;
               if (arr[n - 1 - i] == 0)
                    l = 1;
          }
          return ans;
     }
};

// gfg
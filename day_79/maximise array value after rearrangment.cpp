class Solution
{
public:
     const long long mod = 1000000007;
     int Maximize(vector<int> &arr)
     {
          sort(arr.begin(), arr.end());
          long long ans = 0;
          for (long long i = 0; i < arr.size(); i++)
          {
               ans = ans + (arr[i] * i);
          }
          return ans % mod;
     }
};

// gfg
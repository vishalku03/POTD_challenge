class Solution
{
public:
     int mod = 1e9 + 7;

     int countgroup(vector<int> &arr)
     {
          // Complete the function
          int n = arr.size();
          int count = 0;
          for (int i = 0; i < n; i++)
          {
               count ^= arr[i];
          }
          if (count != 0)
               return 0;

          return int(pow(2, n - 1) - 1) % mod;
     }
};

// gfg
class Solution
{
public:
     long long int floorSqrt(long long int n)
     {
          long long int l = 0, r = n, ans = n;
          while (l <= r)
          {
               long long int mid = (l + r) / 2;
               if (mid * mid == n)
                    return mid;
               if (mid * mid < n)
               {
                    ans = mid;
                    l = mid + 1;
               }
               else
               {
                    r = mid - 1;
               }
          }
          return ans;
     }
};

// gfg
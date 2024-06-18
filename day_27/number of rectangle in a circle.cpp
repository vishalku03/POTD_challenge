class Solution
{
public:
     int rectanglesInCircle(int r)
     {
          int d = 4 * r * r;
          int ans = 0;
          for (long long i = 1; i * 1LL * i < 4 * r * r; i++)
          {
               long long m = sqrt(d - i * i);
               ans = ans + m;
          }
          return ans;
     }
};

// gfg
class Solution
{
public:
     long long sumMatrix(long long n, long long q)
     {
          if (q > 2 * n) // if q is out of range from 2 to 2*n
               return 0;

          long long avg = n + 1;         // total sum = 2*(n+1)
          long long diff = abs(q - avg); // absolute diff between q and avg

          return n - diff;
     }
};
// gfg
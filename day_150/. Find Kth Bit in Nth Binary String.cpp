class Solution
{
public:
     int solve(int n, int k)
     {
          if (n == 1)
               return 0;
          int mid = 1 << (n - 1);
          if (k == mid)
               return 1;
          if (k < mid)
               return solve(n - 1, k);
          return !solve(n - 1, 2 * mid - k);
     }
     char findKthBit(int n, int k)
     {
          return solve(n, k) + '0';
     }
};

// leetcode -  1545
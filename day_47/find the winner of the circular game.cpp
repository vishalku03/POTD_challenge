class Solution
{
public:
     int solve(int n, int k)
     {
          if (n == 1)
               return 0;

          int fun = solve(n - 1, k);
          return (fun + k) % n;
     }
     int findTheWinner(int n, int k)
     {

          int ans = solve(n, k);
          return ans + 1;
     }
};

// this qusation is solve by recursion

// leetcode -  1823
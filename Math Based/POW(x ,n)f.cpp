class Solution
{
public:
     double solve(double x, long n)
     {
          if (n == 0)
               return 1; //   hmesa 0  ka power 1 hi hota hai
          if (n < 0)
               return solve(1 / x, -n); // -ve ko +ve bna kar
          if (n % 2 == 0)
               return solve(x * x, n / 2);      // agar n even ho to
          return x * solve(x * x, (n - 1) / 2); // otherwise n odd ho to
     }
     double myPow(double x, int n)
     {
          return solve(x, (long)n);
     }
};

// leetcode problem - 50
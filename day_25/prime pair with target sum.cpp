class Solution
{
public:
     vector<bool> sieveOfEratosthenes(int n)
     {
          vector<bool> isPrime(n + 1, true);
          isPrime[0] = isPrime[1] = false;

          for (int p = 2; p * p <= n; p++)
          {
               if (isPrime[p])
               {
                    for (int i = p * p; i <= n; i += p)
                    {
                         isPrime[i] = false;
                    }
               }
          }

          return isPrime;
     }
     vector<int> getPrimes(int n)
     {
          // code here
          vector<bool> ans = sieveOfEratosthenes(n);

          if (ans[n - 2])
               return {2, n - 2};
          if (ans[n - 3])
               return {3, n - 3};
          for (int i = 2; i < (n / 2); i++)
          {
               if (ans[i] && ans[n - i])
               {
                    return {i, n - i};
               }
          }
          return {-1, -1};
     }
};

//gfg
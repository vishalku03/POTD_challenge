class Solution
{

public:
     string armstrongNumber(int n)
     {

          int num = n, sum = 0;

          while (num > 0)
          {
               int digit = num % 10;
               sum += (digit * digit * digit);
               num /= 10;
          }

          if (sum == n)
               return "true";

          return "false";
     }
};
// gfg
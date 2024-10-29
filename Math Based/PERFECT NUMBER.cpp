class Solution
{
public:
     bool checkPerfectNumber(int num)
     {
          if (num == 6)
               return true;

          if (num < 10)
               return false;

          int sum = 0;

          for (int i = 1; i < num; i++)
          {
               if (num % i == 0)
                    sum = sum + i;
          }

          if (sum == num)
               return true;

          else
               return false;
     }
};

// ;leetcode - 507

// perfect number ->  divisiors of number and if we add all  divisor is 
// equal to main or original number 
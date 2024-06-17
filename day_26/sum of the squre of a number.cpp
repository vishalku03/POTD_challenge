class Solution
{
public:
     bool judgeSquareSum(int c)
     {
          long long int start = 0;
          long long int end = (long long int)sqrt(c);
          while (start <= end)
          {
               long long int sum = (long)start * start + (long)end * end;
               if (sum == c)
                    return true;
               else if (sum < c)
                    start++;
               else
                    end--;
          }
          return false;
     }
};
// leetcode - 633
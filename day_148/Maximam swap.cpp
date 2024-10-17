class Solution
{
public:
     int maximumSwap(int num)
     {
          int duplicate = num, maxi = -1, res = 0, currMax = -1;
          vector<int> digits;
          while (num)
          {
               digits.push_back(num % 10);
               num /= 10;
          }

          int n = digits.size();
          for (int i = n - 2; i >= 0; i--)
          {
               if (digits[i] > digits[i + 1])
               {
                    currMax = i;
                    break;
               }
          }

          if (currMax == -1)
               return duplicate;

          for (int i = currMax + 1; i >= 0; i--)
          {
               if (digits[i] >= digits[currMax])
               {
                    currMax = i;
               }
          }

          for (int i = n - 1; i >= 0; i--)
          {
               if (digits[i] < digits[currMax])
               {
                    swap(digits[currMax], digits[i]);
                    break;
               }
          }
          for (int i = n - 1; i >= 0; i--)
          {
               res = res * 10 + digits[i];
          }
          return res;
     }
};

// leetcode -  670
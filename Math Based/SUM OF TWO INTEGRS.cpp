class Solution
{
public:
     int getSum(int a, int b)
     {
          if (b == 0)
               return a;
          if (a == 0)
               return b;

          int sum = a ^ b;

          int carry = (unsigned)(a & b) << 1; // used unsigned so that last does not change

          return getSum(sum, carry);
     }
};

// leetcode - 371

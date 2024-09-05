class Solution
{
public:
     int missingNumber(int n, vector<int> &arr)
     {

          int sum = n * (n + 1) / 2;
          for (int i : arr)
          {
               sum -= i;
          }

          return sum;
     }
};

// gfg
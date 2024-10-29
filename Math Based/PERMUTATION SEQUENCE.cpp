class Solution
{
public:
     string getPermutation(int n, int k)
     {

          int num = 0;
          for (int i = 1; i <= n; i++)
          {
               num = num * 10 + i;
          }
          string ans = to_string(num);
          int i = 1;

          while (i != k)
          {
               next_permutation(ans.begin(), ans.end());
               i++;
          }
          return ans;
     }
};

// leetcode problrm - 60
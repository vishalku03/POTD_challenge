class Solution
{
public:
     int maxProduct(vector<int> &nums)
     {

          // i am using prefix and sufix approach
          int n = nums.size();
          double maxPro = INT_MIN;
          double Pre = 1;
          double Suff = 1;
          for (int i = 0; i < n; i++)
          {
               if (Pre == 0)
                    Pre = 1; // 0 isliye ni ho sskta because of
                             //                   MULTIPLICATION
               if (Suff == 0)
                    Suff = 1; // SAME HERE
               Pre = Pre * nums[i];
               Suff = Suff * nums[n - i - 1];
               maxPro = max(maxPro, max(Pre, Suff));
          }

          return maxPro;
     }
};
// leetcode -  152
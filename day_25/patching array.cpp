class Solution
{
public:
     int minPatches(vector<int> &nums, int n)
     {
          int m = nums.size();
          long long i = 1, sum = 1, ans = 0;
          if (nums[0] != 1)
          {
               ans++;
               i--;
          }
          while (i < m && sum < n)
          {
               while (sum < nums[i] - 1 && sum < n)
               {
                    ans++;
                    sum += sum + 1;
               }
               sum += nums[i];
               i++;
          }
          while (sum < n)
          {
               ans++;
               sum += sum + 1;
          }
          return ans;
     }
};

// leetcode 330
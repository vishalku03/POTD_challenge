class Solution
{
public:
     long long maxSubarraySum(vector<int> &arr)
     {
          long long curr_sum = 0;
          long long ans = -1e15;
          for (auto i : arr)
          {
               curr_sum += i;
               ans = max(ans, curr_sum);

               if (curr_sum < 0)
                    curr_sum = 0;
          }

          return ans;
     }
};


// gfg
class Solution
{
public:
     vector<int> getFinalState(vector<int> &nums, int k, int multi)
     {
          while (k--)
          {
               int index = -1;
               int mini = INT_MAX;
               for (int i = 0; i < nums.size(); i++)
               {
                    if (mini > nums[i])
                    {
                         mini = nums[i];
                         index = i;
                    }
               }

               nums[index] *= multi;
          }
          return nums;
     }
};
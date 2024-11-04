class Solution
{
public:
     vector<int> getFloorAndCeil(int x, vector<int> &nums)
     {

          int floor = INT_MIN;
          int ceil = INT_MAX;
          for (int i = 0; i < nums.size(); i++)
          {

               if (nums[i] <= x && nums[i] > floor)
               {
                    floor = nums[i];
               }
               if (nums[i] >= x && nums[i] < ceil)
               {
                    ceil = nums[i];
               }
          }

          if (floor == INT_MIN)
               floor = -1;
          if (ceil == INT_MAX)
               ceil = -1;
          return {floor, ceil};
     }
};

// geeksforfeeks
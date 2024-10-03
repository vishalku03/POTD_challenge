class Solution {
public:
    bool search(vector<int>& nums, int target) {
        
        /*

         BRUTE FORCE: 

        for(auto it : nums)
        {
            if(it  == target)
            return true;
        }

        return false;
        */
        int  n =  nums.size();
        int i = 0;
        int j =  n-1;
        while(i<=j)
        {
            int mid  =  i+(j-i)/2;

            if(nums[mid] == target)
            return true;

            if(nums[i] == nums[mid] && nums[mid] == nums[j])
            {
                i++;
                j--;
                continue;
            }

            if(nums[i] <= nums[mid])
            {
                if(nums[i] <= target && nums[mid] >= target)
                {
                    j = mid-1;
                }
                else
                {
                    i = mid+1;
                }
            }

            else
            {
                if(nums[mid]<=target && nums[j]>=target)
                {
                    i = mid+1;
                }
                else
                {
                    j = mid-1;
                }
            }

        }
      return false;
    }
};

// leetcode -  81
class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n =  nums.size();
        int ans =  n;
        int ones =  count(begin(nums) , end(nums) , 1);
        int j = 0;
        int count = 0;
        for(int i = 0;i<n; ++i)
        {
            while(j-i<ones)
            {
                count =  count+nums[j++%n];
            }

            ans =  min(ans , ones-count);

            count =  count-nums[i];
        }

        return ans;
    }
};

// lc-  2134
class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        const int n = nums.size();
        if (n==1 || k==1) return nums; 
        vector<int> ans(n-k+1, -1); 
        int len=1; 
        for (int r=1; r < n; r++) {
            len=(nums[r] == nums[r-1]+1)? len+1: 1;
            if (len >= k) {
                ans[r-k+1] = nums[r];
            
            }
        }

        return ans;
    }
};

// leetcode -  3254
class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> ans;
        for(int i = 0;i<n;i++)
        {
            int prefix = 0;
            for(int j = i;j<n;j++)
            {
                prefix =  prefix+nums[j];
                ans.push_back(prefix);
            }
        }

        sort(ans.begin() , ans.end());
        int result = 0;

        int mod =  1000000007;

        for(int i = left-1;i<right;i++)
        {
            result =  (result+ans[i]) % mod;
        }

        return result;
    }
};

// lc -  1508
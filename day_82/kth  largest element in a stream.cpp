class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>> ans;
    int x;
    KthLargest(int k, vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        for(int i=0;i<nums.size();i++)
        {
            ans.push(nums[i]);
            if(ans.size()>k)
            ans.pop();
        }
        x = k;
    }
    
    int add(int val) {
            ans.push(val);
            if(ans.size()>x)
            ans.pop();
            return ans.top();
    }
};

// leetcode -  703
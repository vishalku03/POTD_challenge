class Solution {
  public:
    vector<int> rearrange(const vector<int>& arr) {
        
        vector<int> ans(arr.begin(),arr.end());
        int n =  arr.size();
        int i = 0;
        while(i<n)
        {
            if(ans[i]==i)
            {
                i++;
            }
            else
            {
                if(ans[i] != -1)
                {
                    swap(ans[i], ans[ans[i]]);
                }
                else
                {
                    i++;
                }
            }
        }
        return ans;
    }
};

// gfg
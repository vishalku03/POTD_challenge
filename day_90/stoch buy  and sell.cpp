class Solution{
public:
    
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        vector<vector<int>> ans;
        int i = 0;
        while(i<n-1)
        {
            while(i<n-1 && A[i] >=A[i+1])
            {
                i++;
            }
            int buy = i;
            while(i<n-1&& A[i] <=A[i+1])
            {
                i++;
            }
            int sell = i;
            
            if(buy <sell)
            {
                ans.push_back({buy , sell});
            }
        }
        return ans;
    }
};

// gfg
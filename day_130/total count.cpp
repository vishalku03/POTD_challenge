class Solution {
  public:
    int totalCount(int k, vector<int>& arr) {
        // code here
        int ans = 0;
        for(int i = 0;i<arr.size();i++)
        {
            int num = arr[i]/k;
            int rem =  arr[i]%k;
            ans+=num;
            
            if(rem > 0)
            ans++;
        }
        
        return ans;
    }
};

// gfg
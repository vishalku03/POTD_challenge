class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
     vector<long long int> productExceptSelf(vector<long long int>& nums) {
        long long int m=1;
        int zero=0;
        
        for(int it: nums){
            if(it!=0) m=m*it;
            if(it==0) zero++;
        }
        
        vector<long long int> ans;
        
        for(int it: nums){
            if(it!=0 && zero>=1){
                ans.push_back(0);
            }
            else if(it!=0 && zero==0){
                ans.push_back(m/it);
            }
            else if(it==0 && zero>1){
                ans.push_back(0);
            }
            else if(it==0 && zero==1){
                ans.push_back(m);
            }
        }
        return ans;
    }
};


// gfg
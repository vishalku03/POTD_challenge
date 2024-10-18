class Solution {
public:
    int countSubsets(int idx, int currOr, vector<int>&nums,int maxOr)
    {
        // base case 
        if(idx == nums.size())
        {
            if(currOr == maxOr)
            return 1;             // found  one subset

            return 0;
        }
        // take  nums[idx]
        int  takeCount = countSubsets(idx+1,currOr|nums[idx],nums,maxOr);

        // not taken nums[idx]
        int notTakeCount =  countSubsets(idx+1,currOr,nums,maxOr);

        return takeCount + notTakeCount;
    } 


    int countMaxOrSubsets(vector<int>& nums) {
        
        int maxOr  = 0;
        for(int &num : nums)
        {
            maxOr |= num;
        }
        int currOr = 0;
        return countSubsets(0, currOr, nums,maxOr);
    }
};

// sare element ka OR le lo to hame maximum  number mil jayega
// time complexity - 


// leetcode -  2044
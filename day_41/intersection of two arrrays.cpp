class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
       map<int , int> frq;
       vector<int> ans;
       for(int i = 0; i<nums1.size();i++)
       {
        frq[nums1[i]]++;
       } 

       for(int i  = 0;i<nums2.size();i++){
        if(frq[nums2[i]] > 0){
            frq[nums2[i]]--;

            ans.push_back(nums2[i]);
        }
       }

       return ans;
    }
};

// leetcode  -  350
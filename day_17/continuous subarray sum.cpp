
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
      unordered_set<int> s;
        int sum  = 0;
        int prev_sum = 0;
        for(int num:nums) {
            sum = (sum + num) % k;
            if(s.find(sum) != s.end()) return true;
            s.insert(prev_sum);
            prev_sum = sum;
        }
        return false;
    }
};
// leetcode  -  523
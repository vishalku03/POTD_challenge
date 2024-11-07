class Solution {
public:
    static int largestCombination(vector<int>& candidates) {
        int max_set=0;
        for(char b=0; b<24; b++){
            int b_bit_set=count_if(candidates.begin(), candidates.end(), [&](int x){
                return x>>b & 1;
            });
            max_set=max(max_set, b_bit_set);
        }
        return max_set;
    }
};

// leetcode =  2275
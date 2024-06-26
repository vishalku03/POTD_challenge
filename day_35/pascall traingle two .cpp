class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        vector<int> ans(1,1);
        long long  prev = 1;

        for(int i = 1; i<= rowIndex; i++)
        {
            long long next_val =  prev*(rowIndex - i+1)/i;
            ans.push_back(next_val);
            prev =  next_val;
        }

        return ans;
    }
};

// leetcode -   119
class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        
        vector<int> ans1(1001);
        vector<int> ans2(1001);

        for(int &i: target)
        {
            ++ans1[i];
        }
        for(int &j: arr)
        {
            ++ans2[j];
        }

        return ans1 == ans2;
    }
};

// lc -  1460
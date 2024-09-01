class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        
       if(original.size() != m*n) return {};
       vector<vector<int>> ans =  {{}};
       for(int num : original)
       {
          ans.back().push_back(num);

          if(ans.back().size()==n&& ans.size()<m)
          ans.push_back({});
       }

       return ans;
    }
};





// leetcode =  2022
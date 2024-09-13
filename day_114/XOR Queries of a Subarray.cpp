class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> binary;
        for(int i=0;i<queries.size();i++){
            int start=queries[i][0];
            int end=queries[i][1];
            int xorVal=arr[start];
            for(int j=start+1;j<=end;j++){
                xorVal=xorVal^arr[j];
            }
            binary.push_back(xorVal);
        }
        return binary;
    }
};


// lc - 1310
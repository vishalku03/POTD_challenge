class Solution {
  public:
    int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        
        vector<int> arr;
        for(int i = 0; i<arr1.size();i++)
        {
            arr.push_back(arr1[i]);
        }
        for(int i = 0;i<arr2.size();i++)
        {
            arr.push_back(arr2[i]);
        }
        
        sort(arr.begin() , arr.end());
        
        return arr[k-1];
    }
};

// gfg
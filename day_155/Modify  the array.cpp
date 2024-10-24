class Solution {
  public:
    vector<int> modifyAndRearrangeArray(vector<int> &arr) {
        // Complete the function
        int n=arr.size();
        for(int i=0;i<n-1;i++){
            if(arr[i]!=0){
                if(arr[i]==arr[i+1]){
                    arr[i]=2*arr[i];
                    arr[i+1]=0;
                }
            }
        }vector<int>ans;
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                ans.push_back(arr[i]);
            }
        }
        int m=ans.size();
        for(int i=0;i<n-m;i++){
            ans.push_back(0);
        }return ans;
    }
};

// gfg
class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        int n = arr.size();
        int m = k;
        for(int i = 0;i<n;i++)
        {
            if(m<arr[i])
            {
                return m;
            }
            else
            {
                m++;
            }
        }
        return m;
        // Your code goes here
    }
};



// gfg
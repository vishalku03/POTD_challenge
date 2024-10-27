class Solution {
  public:
   bool findTriplet(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        
        for(int i=n-1;i>=0;i--) {
            int j=i-1,k=0;
            
            while(j>k) {
                if(arr[i] == (arr[j]+arr[k])) return true;
                else if(arr[i] > (arr[j]+arr[k])) k++;
                else j--;
            }
        }
        
        return false;
    
    }
};

// geeksforgeeks
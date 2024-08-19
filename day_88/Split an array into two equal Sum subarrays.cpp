class Solution {
  public:
   bool canSplit(vector<int>& arr) {
        int totalsum=0,
        int sum=0;
        int j=0;
        int i=0;
        for( i=0;i<arr.size();i++)
        {
            totalsum+=arr[i];
        }
        int target=totalsum/2;
        if (totalsum % 2 != 0) 
        {
            return false;
        }
        while(sum<=target)
        {
            sum+=arr[j];
            j++;
            if(sum==target)
            {
                return true;
                break;
            }
            if(sum>target)
            {
                return false;
                break;
            }
        }
  
    }
};

// gfg
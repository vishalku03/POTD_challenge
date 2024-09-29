class Solution {
  public:
  vector<int>dp;
  int f(int index,int k,vector<int>&arr)
  {
      if(index>=arr.size()-1)
      {
          return 0;
      }
      if(dp[index]!=-1) return dp[index];
      int a=INT_MAX;
      for(int i=1;i<=k;i++)
      {  
          if((i+index)<arr.size())
          a=min(a,abs(arr[index]-arr[i+index])+f(i+index,k,arr));
          
      }
      return dp[index]=a;
  }
    int minimizeCost(int k, vector<int>& arr)
    {
        // Code here
        dp.resize(arr.size()+1,-1);
        return f(0,k,arr);
    }
};


// geeksforgeeks
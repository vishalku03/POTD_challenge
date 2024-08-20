class Solution
{
public:
     void rearrange(long long *arr, int n)
     {
          vector<int> ans;
          int i = 0;
          int j = n - 1;
          while (i < n)
          {
               ans.push_back(arr[j]);
               ans.push_back(arr[i]);
               i++;
               j--;
          }
          for (i = 0; i < n; i++)
          {
               arr[i] = ans[i];
          }
     }
};


// gfg
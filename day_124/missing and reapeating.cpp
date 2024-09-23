class Solution
{

public:
     vector<int> findTwoElement(vector<int> &arr)
     {
          // code here
          vector<int> mp(arr.size() + 1, 0);
          vector<int> ans(2);

          for (int i = 0; i < arr.size(); i++)
          {
               mp[arr[i]]++;
          }
          for (int i = 1; i <= arr.size(); i++)
          {
               if (mp[i] == 0)
               {
                    ans[1] = i;
               }
               if (mp[i] == 2)
               {
                    ans[0] = i;
               }
          }

          return ans;
     }
};

// gfg
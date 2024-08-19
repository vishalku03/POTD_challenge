class Solution
{
public:
     // arr : given array
     // k : find kth smallest element and return using this function
     int kthSmallest(vector<int> &arr, int k)
     {

          // sort(arr.begin() , arr.end());
          // return arr[k-1];

          map<int, int> ans;
          for (int i = 0; i < arr.size(); i++)
          {
               ans[arr[i]] = 1;
          }
          int res = 0;
          for (auto j : ans)
          {
               k--;
               if (k == 0)
               {
                    res = j.first;
                    break;
               }
          }
          return res;
     }
};

// gfg
class Solution
{
public:
     int maxDistance(vector<int> &arr)
     {

          int n = arr.size();
          unordered_map<int, int> mp;
          int maximum = 0;
          for (int i = 0; i < n; i++)
          {
               if (mp.find(arr[i]) == mp.end())
               {
                    mp[arr[i]] = i;
               }
          }
          for (int i = 0; i < n; i++)
          {
               maximum = max(maximum, i - mp[arr[i]]);
          }

          return maximum;
     }
};

// gfg
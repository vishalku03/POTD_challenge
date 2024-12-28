class Solution
{
public:
     int countPairs(vector<int> &arr, int target)
     {
          // Code here
          int n = arr.size();
          int c = 0;
          map<int, int> mp;
          for (int i = 0; i < n; i++)
          {
               mp[arr[i]]++;
          }
          for (auto i : mp)
          {

               if (mp.find((target) - (i.first)) != mp.end())
               {
                    if (i.first == (target) - (i.first))
                         c += (i.second * (i.second - 1)) / 2;
                    else if (i.first < ((target) - (i.first)))
                         c += (mp[target - i.first] * i.second);
               }
          }
          return c;
     }
};

// gfg
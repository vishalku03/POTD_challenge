#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int numberofElementsInIntersection(vector<int> &a, vector<int> &b)
     {

          int count = 0;
          unordered_map<int, int> mp;
          for (int i = 0; i < a.size(); i++)
          {
               mp[a[i]]++;
          }
          for (int i = 0; i < b.size(); i++)
          {
               mp[b[i]]++;
          }

          for (auto it : mp)
          {
               if (it.second == 2)
               {
                    count++;
               }
          }

          return count;
     }
};


// gfg
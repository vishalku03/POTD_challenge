#include <bits/stdc++.h>
vector<int> majorityElementII(vector<int> &arr)

{

     int n = arr.size();
     unordered_map<int, int> mp;
     vector<int> ans;

     for (int i = 0; i < n; i++)
     {
          mp[arr[i]]++;
     }

     for (auto it : mp)
     {
          if (it.second > n / 3)
          {
               ans.push_back(it.first);
          }
     }

     return ans;
}

// coding ninjas
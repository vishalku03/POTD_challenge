#include <bits/stdc++.h>
vector<int> missingNumbers(vector<int> &arr, int n)
{

     sort(arr.begin(), arr.end());

     vector<int> ans;
     for (int i = arr[0]; i < arr[n - 1]; i++)
     {
          if (!binary_search(arr.begin(), arr.end(), i))
          {
               ans.push_back(i);
          }
     }
     return ans;
}


// coding ninjas
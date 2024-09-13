#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n)
{

     sort(arr.begin(), arr.end());

     for (int i = 0; i < n; i++)
     {

          for (int j = i + 1; j < n; j++)
          {

               int s = j + 1;
               int e = n - 1;
               int sum = target - (arr[i] + arr[j]);
               while (s < e)
               {
                    if (arr[s] + arr[e] == sum)
                    {
                         return "Yes";
                    }
                    else if (arr[s] + arr[e] > sum)
                    {
                         e--;
                    }
                    else
                    {
                         s++;
                    }
               }
          }
     }
     return "No";
}

// coding ninjas
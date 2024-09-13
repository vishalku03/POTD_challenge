#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n)
{

     int longest = 1;
     sort(arr.begin(), arr.end());
     for (int i = 0; i < n; i++)
     {
          int count = 1;
          int element = arr[i];

          for (int j = i + 1; j < n; j++)
          {
               if (arr[j] == element + 1)
               {
                    element = arr[j];
                    count++;
               }
          }

          longest = max(longest, count);
     }

     return longest;
};

// coding ninjas

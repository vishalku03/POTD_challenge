#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int minimizedMaximum(int n, vector<int> &quantities)
     {
          int start = 1;
          int end = *max_element(quantities.begin(), quantities.end());

          while (start <= end)
          {
               int mid = start + (end - start) / 2;
               int total = 0;
               for (int element : quantities)
               {
                    total += (element + mid - 1) / mid;
               }

               if (total <= n)
               {
                    end = mid - 1;
               }
               else
               {
                    start = mid + 1;
               }
          }
          return start;
     }
};

// leetcode -  2064
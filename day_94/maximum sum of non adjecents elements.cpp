#include <bits/stdc++.h>
int maximumNonAdjacentSum(vector<int> &nums)
{

     int n = nums.size();

     int first = nums[0];

     int second = 0;

     for (int i = 1; i < n; i++)
     {

          int take = nums[i];

          if (i > 1)
          {

               take = take + second;
          }

          int nontake = 0 + first;

          int curr = max(take, nontake);

          second = first;

          first = curr;
     }

     return first;
}
// coding ninjas
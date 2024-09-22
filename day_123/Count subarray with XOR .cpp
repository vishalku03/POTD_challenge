#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
     int count = 0;
     for (int i = 0; i < arr.size(); i++)
     {
          int xorNo = 0;
          for (int j = i; j < arr.size(); j++)
          {
               xorNo = xorNo ^ arr[j];

               if (xorNo == x)
                    count++;
          }
     }

     return count;
}

// coding ninjas

// this is question same as subarry.
// find the sunarray and make XOR  and compare with x
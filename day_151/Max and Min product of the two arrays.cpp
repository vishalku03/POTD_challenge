#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
     long long find_multiplication(vector<int> &arr1, vector<int> &arr2)
     {

          // int cnt = 0;
          int cnt = arr1[0];
          int cnt1 = arr2[0];

          for (int i = 0; i < arr1.size(); i++)
          {

               if (cnt < arr1[i])
               {
                    cnt = arr1[i];
               }
          }

          for (int i = 0; i < arr2.size(); i++)
          {

               if (cnt1 > arr2[i])
               {
                    cnt1 = arr2[i];
               }
          }

          int ans = cnt * cnt1;

          return ans;
     }
};

// geeksforgeeks
<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     bool matSearch(vector<vector<int>> &mat, int x)
     {
          // your code here
          int n = mat.size();
          int m = mat[0].size();
          for (int i = 0; i < n; i++)
          {
               if (mat[i][0] <= x and x <= mat[i][m - 1])
               {
                    if (binary_search(mat[i].begin(), mat[i].end(), x))
                         return true;
               }
          }
          return false;
     }
};
=======
class Solution
{
public:
     bool matSearch(vector<vector<int>> &mat, int x)
     {
          // your code here
          int n = mat.size();
          int m = mat[0].size();
          for (int i = 0; i < n; i++)
          {
               if (mat[i][0] <= x and x <= mat[i][m - 1])
               {
                    if (binary_search(mat[i].begin(), mat[i].end(), x))
                         return true;
               }
          }
          return false;
     }
};
>>>>>>> d0b9c60569dc0eb61384c2994f2535ea5ff6c5fc
// gfg
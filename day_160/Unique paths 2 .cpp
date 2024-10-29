class Solution
{
public:
     int uniquePathsWithObstacles(vector<vector<int>> &os)
     {
          int x = os.size();
          int y = os[0].size();
          vector<int> a(y, 0);
          a[0] = 1;
          for (int i = 0; i < x; i++)
          {
               for (int j = 0; j < y; j++)
               {
                    if (os[i][j] == 1)
                         a[j] = 0;
                    else if (j > 0)
                         a[j] = a[j] + a[j - 1];
               }
          }
          return a[y - 1];
     }
};
// leetcode -  63
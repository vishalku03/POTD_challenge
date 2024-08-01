class Solution
{
public:
     vector<int> spirallyTraverse(vector<vector<int>> &matrix)
     {
          // code here
          int m = matrix.size();
          int n = matrix[0].size();

          int trav[4][3] = {{0, +1, n}, {+1, 0, m - 1}, {0, -1, n - 1}, {-1, 0, m - 2}};

          vector<int> ans;
          int i = 0, r = 0, c = -1;

          while (ans.size() < m * n)
          {
               for (int j = 0; j < trav[i][2]; j++)
               {
                    r += trav[i][0];
                    c += trav[i][1];

                    ans.push_back(matrix[r][c]);
               }
               trav[i][2] -= 2;
               i = (i + 1) % 4;
          }

          return ans;
     }
};

// gfg
class Solution
{
public:
     Node *constructLinkedMatrix(vector<vector<int>> &mat)
     {
          // code Here
          int n = mat.size();
          vector<vector<Node *>> ans(n, vector<Node *>(n));
          for (int i = 0; i < n; i++)
          {
               for (int j = 0; j < n; j++)
               {
                    ans[i][j] = new Node(mat[i][j]);
               }
          }
          for (int i = 0; i < n; i++)
          {
               for (int j = 0; j < n; j++)
               {
                    ans[i][j]->right = (j == n - 1) ? NULL : ans[i][j + 1];
                    ans[i][j]->down = (i == n - 1) ? NULL : ans[i + 1][j];
               }
          }

          return ans[0][0];
     }
};


// geeksforgeeks
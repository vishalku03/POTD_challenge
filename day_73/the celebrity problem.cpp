class Solution
{
public:
     // Function to find if there is a celebrity in the party or not.
     int celebrity(vector<vector<int>> &mat)
     {
          // code here
          int n = mat.size();
          for (int i = 0; i < n; i++)
          {
               bool celebrity = true;
               for (int j = 0; j < n; j++)
               {
                    if (!(mat[i][j] == 0 && mat[j][i] == 1) && i != j)
                    {
                         celebrity = false;
                         break;
                    }
               }
               if (celebrity == true)
                    return i;
          }
          return -1;
     }
}; 
// gfg


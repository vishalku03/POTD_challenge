class Solution
{
public:
     vector<vector<int>> generateMatrix(int n)
     {
          vector<vector<int>> ans(n, vector<int>(n));
          int left = 0, right = n - 1;
          int top = 0, bottom = n - 1;
          int count = 1;
          while (top <= bottom && left <= right)
          {
               // left
               for (int i = left; i <= right; i++)
               {
                    ans[top][i] = count++;
               }
               top++;
               // bottom
               for (int i = top; i <= bottom; i++)
               {
                    ans[i][right] = count++;
               }
               right--;
               // right
               if (top <= bottom)
               {
                    for (int i = right; i >= left; i--)
                    {
                         ans[bottom][i] = count++;
                    }
                    bottom--;
               }
               // top
               if (left <= right)
               {
                    for (int i = bottom; i >= top; i--)
                    {
                         ans[i][left] = count++;
                    }
                    left++;
               }
          }
          return ans;
     }
};

// leetcode  - 59
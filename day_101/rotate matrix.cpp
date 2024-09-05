#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
     // Write your code here
     int topleft = 0, topright = m - 1, bottomright = n - 1, bottomleft = 0;

     while (topleft < topright && bottomleft < bottomright)
     {
          int temp = mat[topleft][bottomleft];
          for (int i = topleft + 1; i <= bottomright; i++)
          {
               mat[i - 1][bottomleft] = mat[i][bottomleft];
          }
          for (int i = bottomleft + 1; i <= topright; i++)
          {
               mat[bottomright][i - 1] = mat[bottomright][i];
          }

          for (int i = bottomright - 1; i >= topleft; i--)
          {
               mat[i + 1][topright] = mat[i][topright];
          }
          for (int i = topright - 1; i >= bottomleft; i--)
          {
               mat[topleft][i + 1] = mat[topleft][i];
          }
          mat[topleft][bottomleft + 1] = temp;
          topleft++;
          bottomleft++;
          topright--;
          bottomright--;
     }
};
/*
   this question is the different from other rotate so be carefull


   coding ninjas
*/
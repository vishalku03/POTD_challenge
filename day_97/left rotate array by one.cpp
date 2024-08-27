#include <bits/stdc++.h>

void change(vector<int> &arr, int s, int e)
{
     while (s < e)
     {
          swap(arr[s], arr[e]);
          s++;
          e--;
     }
}

vector<int> rotateArray(vector<int> &arr, int n)
{
     change(arr, 0, n - 1);
     change(arr, 0, n - 2);

     return arr;
}

// coding ninjas
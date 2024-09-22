#include <bits/stdc++.h>

int findele(int i, int mid, vector<int> &arr, int j)
{

     int l = i;

     int h = mid;

     while (h > l)
     {

          int m = (h + l) / 2;

          if (arr[m] <= j)
          {

               l = m + 1;
          }

          else
          {

               h = m;
          }
     }

     if (arr[l] > j)
          return l;

     return -1;
}

int merge(int left, int mid, int right, vector<int> &arr)
{

     int i = left, j = mid + 1;

     vector<int> temp;

     int cnt = 0;

     while (i <= mid && j <= right)
     {

          if (arr[i] <= arr[j])
          {

               temp.push_back(arr[i++]);
          }

          else
          {

               int k = findele(i, mid, arr, 2 * arr[j]);

               if (k != -1)
                    cnt += mid - k + 1;

               temp.push_back(arr[j++]);
          }
     }

     while (i <= mid)
          temp.push_back(arr[i++]);

     while (j <= right)
          temp.push_back(arr[j++]);

     for (int k = left; k <= right; k++)
          arr[k] = temp[k - left];

     return cnt;
}

int mergeSort(int left, int right, vector<int> &arr)
{

     if (left >= right)
          return 0;

     int cnt = 0;

     int mid = (left + right) / 2;

     cnt += mergeSort(left, mid, arr);

     cnt += mergeSort(mid + 1, right, arr);

     cnt += merge(left, mid, right, arr);

     return cnt;
}

int reversePairs(vector<int> &arr, int n)
{

     // Write your code here.

     return mergeSort(0, n - 1, arr);
}

// coding ninjas
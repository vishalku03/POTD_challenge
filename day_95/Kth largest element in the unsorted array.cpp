#include <bits/stdc++.h>

int kthLargest(vector<int> &arr, int size, int K)

{

     priority_queue<int> num;

     for (int i = 0; i < size; i++)

     {

          num.push(arr[i]);
     }

     while (K > 1)
     {

          num.pop();

          K--;
     }

     return num.top();
}
// coding ninjas

// priority_queue defualt in decreasing order-
// 
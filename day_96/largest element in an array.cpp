#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {

//    sort(arr.begin() , arr.end());
//    return arr[n-1];
     
     int max_nu =  INT_MIN;
     for(int  i = 0;i<n;i++)
     {
         max_nu =  max(arr[i] , max_nu);
     }

      return max_nu;
}

// coding ninjas
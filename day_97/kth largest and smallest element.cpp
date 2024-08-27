#include<bits/stdc++.h>
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	

	sort(arr.begin(), arr.end());

  int first = arr[arr.size() - k];  // kth  largest element
   

  int second = arr[k - 1];           //  kth smallest elemenet

  return {second, first};
}

// coding ninjas
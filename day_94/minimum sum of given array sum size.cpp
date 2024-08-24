#include <bits/stdc++.h> 
int minSubarraySum(int arr[], int n, int k) 
{
    int min_ans =  INT_MAX;
    int curr_sum = 0;
    for(int i = 0;i<k;i++)
    {
        curr_sum =  curr_sum+arr[i];
    }
    min_ans = curr_sum;
    for(int i = k;i<n;i++)
    {
        curr_sum+=arr[i] - arr[i-k];
        min_ans =  min(min_ans, curr_sum);
    }

    return min_ans;
}

// coding ninjas
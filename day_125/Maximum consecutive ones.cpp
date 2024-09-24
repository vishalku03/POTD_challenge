#include<bits/stdc++.h>
using namespace std;
int longestSubSeg(vector<int> &arr, int n, int k)
{

     int l = 0;
     int r = 0;
     int count = 0;
     int zero = 0;
     int maxi = 0;

     while (r < n)
     {
          if (arr[r] == 0)
          {
               if (count < k)
               {
                    maxi = max(maxi, (r - l + 1));
                    r++;
                    count++;
               }
               else
               {
                    if (arr[l] == 0)
                         count--;
                    l++;
               }
          }
          else
          {
               maxi = max(maxi, (r - l + 1));
               r++;
          }
     }

     return maxi;
}

int main()
{
     int n =  7;
     int k = 2;
     vector<int> arr= { 1,0,0,1,1,0};

  int ans =    longestSubSeg(arr,n,k);
     cout<< ans;
}


// coding ninjas
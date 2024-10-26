#include<bits/stdc++.h>
using namespace std;
int platformsNeeded(int arrival[], int departure[], int n)
{
    // Write your code here.\

    sort(arrival, arrival+n);
    sort(departure,departure+n);
    int i = 0;
    int j = 0;
    int ans = 0;
    int countPlatform = 0;
    while(i<n && j<n)
    {
        if(arrival[i] <= departure[j])
        {
            i++;
            countPlatform++;
        }
        else
        {
            j++;
            countPlatform--;
        }

        ans =  max(ans, countPlatform);
    }
    return ans;
}

// coding ninjas
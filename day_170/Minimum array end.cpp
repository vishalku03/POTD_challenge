#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long minEnd(int n, int x) {
        // look at n-1 and set 0 bits accordingly
        long long ans = 0;
        int it=0;
        for(int i=0; i<64; i++) {
            // set bits
            if(x & (1LL<<i)) {
                ans |= (1LL<<i);
                continue;
            }

            // unset bits
            if((n-1) & (1LL<<it)) ans |= (1LL<<i);
            it++;
        } 
        return ans;
    }
};

// leetcode  - 3133
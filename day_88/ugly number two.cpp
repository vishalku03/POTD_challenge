class Solution {
public:
    int nthUglyNumber(int n) {
     if(n<=0) return false;
     if(n==1)  return true;
     int ugly_2 = 0;
     int ugly_3 = 0;
     int ugly_5 = 0;

     vector<int> ans(n);
     ans[0] = 1;
     for(int i = 1;i<n;i++)
     {
        ans[i] = min(ans[ugly_2]*2 , min(ans[ugly_3]*3 , ans[ugly_5]*5));
        if(ans[i] == ans[ugly_2]*2) ugly_2++;
        if(ans[i] == ans[ugly_3]*3) ugly_3++;
        if(ans[i] == ans[ugly_5]*5) ugly_5++;
     }
     
    return ans[n-1]; 

    }
};

// leetcode - 264
#include <bits/stdc++.h> 
using namespace std;
vector<long> spiralPathMatrix(vector<vector<long>> matrix,long n,long m)
{

    vector<long int> ans;

    int left=0;
    int right= m-1;
    int top=0;
    int bottom=n-1;

    while(left<=right && top<=bottom)
    {
        for(int i=left;i<=right;i++)
        {
            ans.push_back(matrix[top][i]);
        }
        top++;

        for(int i=top;i<=bottom;i++)
        {
            ans.push_back(matrix[i][right]);
        }
        right--;

        if(top<=bottom)
        {
            for(int i=right;i>=left;i--)
            {
                ans.push_back(matrix[bottom][i]);
            }
        }
        bottom--;

        if(left<=right)
        {
            for(int i=bottom;i>=top;i--)
            {
                ans.push_back(matrix[i][left]);
            }
        }
        left++;
    }
    return ans;
}

/* using
  
  1. left
  2. right
  3. top
  4. bottom

*/ 

// coding ninjas
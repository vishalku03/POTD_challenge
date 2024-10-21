// exclude and include approch ka use  akrenge
// and i  also use recursion 

#include<bits/stdc++.h>
using namespace std;
void find_Subset_Sum(int index, int sum, int N, vector<int> &nums, vector<int> &subSetSum)

	{
        if(N == index)
        {
            subSetSum.emplace_back(sum);
            return ;
        }
        // PICK
        find_Subset_Sum(index+1, sum + nums[index], N, nums, subSetSum);
        // NOT PICK
        find_Subset_Sum(index+1, sum, N, nums, subSetSum);
    }    
	
vector<int> subsetSum(vector<int> &nums){
	// Write your code here.	
	vector<int> subSetSum;
        int index = 0, sum = 0;
        int N = nums.size();

        find_Subset_Sum(index, sum, N, nums, subSetSum);

        sort(subSetSum.begin(), subSetSum.end());

        return subSetSum;
}

// coding ninjas
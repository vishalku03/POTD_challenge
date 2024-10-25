#include<bits/stdc++.h>
using  namespace std;
class Solution {

  public:
    vector<int> alternateSort(vector<int>& arr) {
        // Your code goes here
        vector<int> ans;
        int n =  arr.size();
        sort(arr.begin(),arr.end());
        int i = n-1;
        int j =  0;
        while(j<=i)
        {
            if(i==j)
            ans.push_back(arr[i]);
            
            else
            {
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
            }
            j++;
            i--;
        }
        return ans;
    }
};
int main()
{
     // Input array
     vector<int> arr = {10, 20, 30, 40, 50, 60, 70, 80};

     // Create a Solution object
     Solution solution;

     // Call the alternateSort function
     vector<int> result = solution.alternateSort(arr);

     // Print the result
     cout << "Sorted array in alternate order: ";
     for (int num : result)
     {
          cout << num << " ";
     }
     cout << endl;

     return 0;
}
// gfg
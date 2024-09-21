// class Solution {
// public:
//     void findlps(vector<int>&lps,string s){
//         int pre=0;
//         int suf=1;
//         while(suf<s.size()){
//             if(s[pre]==s[suf]){
//                 lps[suf]=pre+1;
//                 pre++;
//                 suf++;
//             }
//             else{
//                 if(pre==0){
//                     lps[suf]==0;
//                     suf++;
//                 }
//                 else{
//                     pre=lps[pre-1];
//                 }
//             }
//         }
//     }
//     string shortestPalindrome(string s) {
//         string str=s;
//         string temp = s;
//         reverse(temp.begin(),temp.end());
//         s+='#';
//         s+=temp;
//         vector<int> lps(s.size(),0);
//         findlps(lps,s);
//         int pc = str.size() - lps.back();
//         string ans = str.substr(lps.back(),pc);
//         reverse(ans.begin(),ans.end());
//         ans+=str;
//         return ans;

//     }
// };

// // lc -  214

#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7; // Modulo value to prevent overflow

// Function to process the queries and calculate the sum of the matrix
int findSum(int N, int q, vector<vector<int>> queries)
{
    vector<int> row(N, 0);       // Stores the latest value for each row
    vector<int> col(N, 0);       // Stores the latest value for each column
    vector<int> row_time(N, -1); // Tracks the last update time for each row
    vector<int> col_time(N, -1); // Tracks the last update time for each column

    int current_time = 0; // Keeps track of when each query happens
    for (int i = 0; i < q; ++i)
    {
        int type = queries[i][0];    // Type of query (1 for row, 2 for column)
        int idx = queries[i][1] - 1; // Convert 1-based index to 0-based
        int val = queries[i][2];     // Value to be set

        if (type == 1)
        {
            // Update the entire row at index 'idx'
            row[idx] = val;
            row_time[idx] = current_time; // Mark when this row was last updated
        }
        else if (type == 2)
        {
            // Update the entire column at index 'idx'
            col[idx] = val;
            col_time[idx] = current_time; // Mark when this column was last updated
        }
        current_time++; // Increment time after each query
    }

    // Calculate the sum of the matrix based on the final updates
    long long total_sum = 0;
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            // Check whether the row update or column update is more recent
            if (row_time[i] > col_time[j])
            {
                total_sum = (total_sum + row[i]) % MOD; // Use row value
            }
            else
            {
                total_sum = (total_sum + col[j]) % MOD; // Use column value
            }
        }
    }

    return total_sum;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T; // Number of test cases

    for (int t = 0; t < T; ++t)
    {
        int N, q;
        cin >> N >> q; // Size of the matrix and number of queries

        vector<vector<int>> queries(q, vector<int>(3)); // Store all queries
        for (int i = 0; i < q; ++i)
        {
            cin >> queries[i][0] >> queries[i][1] >> queries[i][2]; // Input for each query
        }

        // Call the function to process queries and get the final sum of the matrix
        cout << findSum(N, q, queries) << endl;
    }

    return 0;
}
. Match karo
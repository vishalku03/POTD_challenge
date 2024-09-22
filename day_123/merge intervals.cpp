#include <bits/stdc++.h>
using namespace std;

// Function to merge overlapping intervals
vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
     if (intervals.size() <= 1)
          return intervals;

     sort(intervals.begin(), intervals.end());

     vector<vector<int>> output;

     // Initialize with the first interval
     output.push_back(intervals[0]);

     for (int i = 1; i < intervals.size(); i++) // start from 1 instead of 0
     {
          // Check if the current interval overlaps with the last one in the output
          if (output.back()[1] >= intervals[i][0])
          {
               output.back()[1] = max(output.back()[1], intervals[i][1]); // Merge intervals
          }
          else
          {
               output.push_back(intervals[i]); // Add non-overlapping interval
          }
     }

     return output;
}

int main()
{
     int n; // Number of intervals
     cout << "Enter the number of intervals: ";
     cin >> n;

     vector<vector<int>> intervals(n, vector<int>(2)); // Vector to store intervals

     cout << "Enter the intervals (start and end points):\n";
     for (int i = 0; i < n; i++)
     {
          cin >> intervals[i][0] >> intervals[i][1]; // Input each interval
     }

     // Call the function to merge the intervals
     vector<vector<int>> mergedIntervals = mergeIntervals(intervals);

     // Output the merged intervals
     cout << "Merged intervals are:\n";
     for (auto interval : mergedIntervals)
     {
          cout << "[" << interval[0] << ", " << interval[1] << "]" << endl;
     }

     return 0;
}

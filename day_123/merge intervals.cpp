#include <bits/stdc++.h>
// intervals[i][0] = start point of i'th interval
// intervals[i][1] = finish point of i'th interval

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)

{

     if (intervals.size() <= 1)

          return intervals;

     sort(intervals.begin(), intervals.end());

     vector<vector<int>> output;

     // initilization vector

     output.push_back(intervals[0]);

     for (int i = 0; i < intervals.size(); i++)
     {

          if (output.back()[1] >= intervals[i][0])
          {

               output.back()[1] = max(output.back()[1], intervals[i][1]);
          }
          else
          {

               output.push_back(intervals[i]);
          }
     }

     return output;
}

// coding ninjas
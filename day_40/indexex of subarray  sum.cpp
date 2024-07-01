class Solution
{
public:
     // Function to find a continuous sub-array which adds up to a given number.
     vector<int> subarraySum(vector<int> arr, int n, long long s)
     {
          // Your code here
          int start = 0, end = 0;
          int tot = 0;
          while (end < n)
          {
               tot += arr[end];

               while (tot > s && start < end)
               {
                    tot -= arr[start++];
               }

               if (tot == s)
               {
                    return {start + 1, end + 1};
               }

               end++;
          }
          return {-1};
     }
};

// gfg
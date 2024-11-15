class Solution
{
public:
     // Function returns the second
     // largest elements
     int getSecondLargest(vector<int> &arr)
     {
          // Code Here
          int largest = INT_MIN;
          for (auto it : arr)
          {
               largest = max(largest, it);
          }
          int secondLargest = -1;
          for (auto it : arr)
          {
               if (it != largest)
               {
                    secondLargest = max(secondLargest, it);
               }
          }
          return secondLargest;
     }
};

// gfg
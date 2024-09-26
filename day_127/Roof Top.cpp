class Solution
{
public:
     // Function to find maximum number of consecutive steps
     // to gain an increase in altitude with each step.
     int maxStep(vector<int> &arr)
     {
          int max_step = 0;
          int step = 0;
          for (int i = 1; i < arr.size(); i++)
          {
               if (arr[i] > arr[i - 1])
               {
                    step++;
                    max_step = max(max_step, step);
               }
               else
               {
                    step = 0;
               }
          }
          return max_step;
     }
};

// gfg
class Solution
{
public:
     vector<int> findSplit(vector<int> &arr)
     {
          vector<int> ans;
          int n = arr.size();
          int sum = 0;
          for (int num : arr)
               sum += num;
          if (sum % 3 != 0)
               return {-1, -1};
          int target = sum / 3;
          sum = 0;

          for (int i = 0; i < n; i++)
          {
               sum += arr[i];
               if (sum == target)
               {
                    sum = 0;
                    ans.push_back(i);
               }
               if (ans.size() == 2)
                    return ans;
          }

          return {-1, -1};
     }
};

// gfg
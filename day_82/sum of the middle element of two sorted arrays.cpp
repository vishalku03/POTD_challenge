class Solution
{
public:
     int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2)
     {

          vector<int> ans;
          for (int i = 0; i < arr1.size(); i++)
          {
               ans.push_back(arr1[i]);
          }

          for (int i = 0; i < arr2.size(); i++)
          {
               ans.push_back(arr2[i]);
          }

          sort(ans.begin(), ans.end());

          int s = 0;
          int e = ans.size() - 1;

          int mid = (s + e) / 2;

          int final_ans = 0;

          for (int i = mid; i < mid + 1; i++)
          {
               final_ans += (ans[mid] + ans[mid + 1]);
          }

          return final_ans;
     }
};

// gfg
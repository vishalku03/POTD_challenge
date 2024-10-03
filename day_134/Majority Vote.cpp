class Solution
{
public:
     vector<int> findMajority(vector<int> &nums)
     {
          // Your code goes here.
          unordered_map<int, int> mp;
          int n = nums.size();
          for (int i = 0; i < n; i++)
          {
               mp[nums[i]]++;
          }

          int maj = n / 3;
          // cout<<maj<<" " ;
          vector<int> ans;
          for (auto &pr : mp)
          {
               // cout<<pr.second<<" ";
               if (pr.second > maj)
               {
                    ans.push_back(pr.first);
               }
          }

          sort(ans.begin(), ans.end());
          if (ans.size() == 0)
               return {-1};
          return ans;
     }
};

// gfg
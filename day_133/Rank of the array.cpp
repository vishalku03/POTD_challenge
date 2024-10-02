class Solution
{
public:
     vector<int> arrayRankTransform(vector<int> &arr)
     {

          vector<int> temp = arr;
          sort(temp.begin(), temp.end());
          auto it = unique(temp.begin(), temp.end());
          temp.erase(it, temp.end());
          unordered_map<int, int> mp;
          for (int i = 0; i < temp.size(); i++)
          {
               mp[temp[i]] = i + 1;
          }
          vector<int> ans;
          for (auto i : arr)
          {
               ans.push_back(mp[i]);
          }

          return ans;
     }
};

/*

create a copy of the original array
sort the temporary array
remove  suplicates
Asssign ranks to each unique element
Replace elements in the original array with their ranks

*/


// leetcode -  1331R
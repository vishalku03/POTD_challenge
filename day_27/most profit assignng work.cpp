class Solution
{
public:
     int maxProfitAssignment(vector<int> &difficulty, vector<int> &profit, vector<int> &worker)
     {
          int n = profit.size();
          vector<pair<int, int>> vtr;
          for (int i = 0; i < n; i++)
          {
               vtr.push_back({difficulty[i], profit[i]});
          }
          sort(vtr.begin(), vtr.end());
          int maxi = vtr[0].second;
          for (auto &it : vtr)
          {
               maxi = max(maxi, it.second);
               it.second = maxi;
          }
          int sum = 0;
          for (auto &it : worker)
          {
               int val = it, curr = 0;
               int l = 0, h = n - 1;
               while (h >= l)
               {
                    int mid = (h + l) / 2;
                    if (vtr[mid].first <= val)
                    {
                         curr = vtr[mid].second;
                         l = mid + 1;
                    }
                    else
                         h = mid - 1;
               }
               sum += curr;
          }

          return sum;
     }
};
// leetcode  -  826
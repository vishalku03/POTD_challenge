class Solution
{
public:
     int maxMeetings(int n, int start[], int end[])
     {
          vector<pair<int, int>> ans;
          for (int i = 0; i < n; i++)
          {
               ans.push_back({end[i], start[i]});
          }
          sort(ans.begin(), ans.end());

          int count = 0;
          int thendtime = -1;

          for (auto i : ans)
          {
               if (i.second > thendtime)
               {
                    thendtime = i.first;
                    count++;
               }
          }

          return count;
     }
};

// gfg
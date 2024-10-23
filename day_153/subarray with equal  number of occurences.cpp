
class Solution
{
public:
     int sameOccurrence(vector<int> &arr, int x, int y)
     {
          // code here
          int xcount = 0, ycount = 0, ans = 0;
          unordered_map<int, int> m;
          m[0] = 1;
          for (int i : arr)
          {
               if (i == x)
                    xcount++;
               if (i == y)
                    ycount++;
               int dif = xcount - ycount;
               if (m.find(dif) != m.end())
                    ans += m[dif];
               m[dif]++;
          }
          return ans;
     }
};
// gfg
class Solution
{
public:
     void matchPairs(int n, char nuts[], char bolts[])
     {
          // code here
          if (n == 1)
               return;
          vector<char> v = {'!', '#', '$', '%', '&', '*', '?', '@', '^'};
          unordered_map<char, int> mp;
          int i = 0;
          for (auto it : v)
          {
               mp[it] = i;
               i++;
          }
          vector<bool> nut(9, false);
          vector<bool> bolt(9, false);
          for (i = 0; i < n; i++)
          {
               nut[mp[nuts[i]]] = true;
               bolt[mp[bolts[i]]] = true;
          }

          int j = 0, k = 0;
          for (i = 0; i < n; i++)
          {
               while (!nut[j])
                    j++;
               while (!bolt[k])
                    k++;
               nuts[i] = v[j];
               bolts[i] = v[k];
               j++;
               k++;
          }
     }
};
// gfg
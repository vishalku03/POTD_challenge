class Solution
{
public:
     // Function to find the first non-repeating character in a string.
     char nonRepeatingChar(string &s)
     {

          unordered_map<char, int> ans;
          for (int i = 0; i < s.size(); i++)
          {
               ans[s[i]]++;
          }
          for (int i = 0; i < s.size(); i++)
          {
               if (ans.find(s[i]) != ans.end())
               {
                    if (ans[s[i]] == 1)
                    {
                         return s[i];
                    }
               }
          }
          return '$';
     }
};
/// gfg
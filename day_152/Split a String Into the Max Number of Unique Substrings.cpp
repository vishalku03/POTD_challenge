// leetcode -  1593
class Solution
{
public:
     unordered_set<string> st;
     int result = 0;

     void solve(string &s, int idx)
     {
          if (idx == s.size())
          {
               // Update the result with the maximum number of unique substrings found
               result = max(result, (int)st.size());
               return;
          }

          string temp = "";
          // Try every possible split
          for (int i = idx; i < s.size(); i++)
          {
               temp += s[i];
               // If this substring is not already in the set, try it
               if (!st.count(temp))
               {
                    st.insert(temp); // Add the current substring to the set
                    solve(s, i + 1); // Recurse to find the next split
                    st.erase(temp);  // Backtrack by removing the current substring
               }
          }
     }

     int maxUniqueSplit(string s)
     {
          solve(s, 0);
          return result;
     }
};
class Solution
{
public:
     vector<string> commonChars(vector<string> &words)
     {
          int n = words.size();
          vector<string> ans;

          sort(words.begin(), words.end());

          for (char ch : words[0])
          {
               bool commn = true;

               for (int i = 1; i < n; i++)
               {
                    if (words[i].find(ch) == string::npos)
                    {
                         commn = false;
                         break;
                    }
                    else
                    {
                         words[i].erase(words[i].find(ch), 1);
                    }
               }
               if (commn)
                    ans.push_back(string(1, ch));
          }
          return ans;
     }
};
// leetcode  - 1002
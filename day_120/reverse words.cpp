class Solution
{
public:
     // Function to reverse words in a given string.
     string reverseWords(string str)
     {
          vector<string> s;
          string word = "";
          for (char ch : str)
          {
               if (ch == '.')
               {
                    s.push_back(word);
                    word = "";
               }
               else
               {
                    word += ch;
               }
          }
          s.push_back(word);
          reverse(s.begin(), s.end());
          string result = "";
          for (int i = 0; i < s.size(); i++)
          {
               result += s[i];
               if (i != s.size() - 1)
               {
                    result += ".";
               }
          }
          return result;
     }
};

// gfg
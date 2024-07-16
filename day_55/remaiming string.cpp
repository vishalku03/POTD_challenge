class Solution
{
public:
     string printString(string s, char ch, int count)
     {
          // Your code goes here
          int cnt = 0;
          for (int i = 0; i < s.size(); i++)
          {
               if (s[i] == ch)
               {
                    cnt++;
               }
               if (count == cnt)
               {
                    string str = s.substr(i + 1, s.size() - i + 1);
                    return str;
               }
          }
          return "";
     }
};


// gfg
class Solution
{
public:
     string rremove(string s)
     {
          string m;
          int i = 0;
          for (int i = 0; i < s.length(); i++)
          {

               if ((s[i] != s[i + 1] || i == s.length() - 1) && (s[i] != s[i - 1] || i == 0))
               {
                    m.push_back(s[i]);
               }
          }

          if (m == s)
          {
               return m;
          }
          return rremove(m);
     }
};

// gfg
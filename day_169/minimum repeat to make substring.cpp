class Solution
{
public:
     int minRepeats(string &s1, string &s2)
     {
          string temp = s1;
          int count = 1;
          while (s1.size() < s2.size())
          {
               s1 = s1 + temp;
               count++;
          }
          if (s1.find(s2) != string::npos)
               return count;
          s1 = s1 + temp;
          count++;

          // for extra check

          if (s1.find(s2) != string::npos)
               return count;
          else
               return -1;
     }
};


// gfg
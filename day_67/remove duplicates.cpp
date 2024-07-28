class Solution
{
public:
     string removeDups(string str)
     {
          // Your code goes here
          for (int i = 0; str[i]; i++)
          {
               for (int j = i + 1; str[j]; j++)
               {
                    if (str[i] == str[j])
                    {
                         str.erase(j, 1);
                         j--;
                    }
               }
          }

          return str;
     }
};

// gfg
class Solution
{
public:
     int isValid(string str)
     {
          // code here
          vector<string> v;
          v.push_back("");
          int index = 0;

          for (int i = 0; i < str.length(); i++)
          {
               if (str[i] == '.')
               {
                    index++;
                    v.push_back("");
               }
               else
               {
                    v[index] += str[i];
               }
          }

          if (v.size() != 4)
               return false;

          for (int i = 0; i < v.size(); i++)
          {
               if (v[i].empty() || (v[i][0] == '0' && v[i].length() > 1))
                    return false;

               try
               {
                    int num = stoi(v[i]);
                    if (num < 0 || num > 255)
                         return false;
               }
               catch (invalid_argument &e)
               {
                    return false;
               }
               catch (out_of_range &e)
               {
                    return false;
               }
          }

          return true;
     }
};

// gfg
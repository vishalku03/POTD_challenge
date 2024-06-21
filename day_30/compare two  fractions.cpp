class Solution
{
public:
     string compareFrac(string str)
     {

          // Code here
          double num1 = 0, num2 = 0, den1 = 0, den2 = 0;
          string temp = "";
          int i = 0;
          while (i < str.size() && str[i] != '/')
          {
               num1 = num1 * 10 + (str[i] - '0');
               i++;
          }
          i++;
          while (i < str.size() && str[i] != ',')
          {
               den1 = den1 * 10 + (str[i] - '0');
               i++;
          }
          i += 2;
          while (i < str.size() && str[i] != '/')
          {
               num2 = num2 * 10 + (str[i] - '0');
               i++;
          }
          i++;
          while (i < str.size())
          {
               den2 = den2 * 10 + (str[i] - '0');
               i++;
          }
          double f1 = num1 / den1;
          double f2 = num2 / den2;
          if (f1 > f2)
          {
               i = 0;
               while (str[i] != ',')
               {
                    temp += str[i];
                    i++;
               }
               return temp;
          }
          else if (f1 < f2)
          {
               i = str.size() - 1;
               while (str[i] != ' ')
               {
                    temp += str[i];
                    i--;
               }
               reverse(temp.begin(), temp.end());
               return temp;
          }
          else
          {
               return "equal";
          }
     }
};

// gfg
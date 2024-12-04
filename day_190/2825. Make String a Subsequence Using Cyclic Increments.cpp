class Solution
{
public:
     bool canMakeSubsequence(string str1, string str2)
     {

          int n = str1.size();
          int m = str2.size();
          int i = 0;
          int j = 0;

          while (i < n && j < m)
          {
               if ((str1[i] == str2[j]) || (str1[i] == 'z' && str2[j] == 'a') || (str1[i] + 1 == str2[j]))
               {
                    i++;
                    j++;
               }
               else
               {
                    i++;
               }
          }
          return j == m;
     }
};sri
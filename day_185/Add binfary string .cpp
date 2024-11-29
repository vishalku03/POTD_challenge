class Solution
{
public:
     string addBinary(string &s1, string &s2)
     {
          int n = s1.size() - 1;
          int m = s2.size() - 1;
          string ans = "";
          int carry = '0';
          while (n >= 0 && m >= 0)
          {
               if (s1[n] == '0' && s2[m] == '1' || s1[n] == '1' && s2[m] == '0')
               {
                    if (carry == '1')
                    {
                         ans += '0';
                         carry = '1';
                    }
                    else
                    {
                         ans += '1';
                    }
               }
               else if (s1[n] == '1' && s2[m] == '1')
               {
                    if (carry == '1')
                    {
                         ans += '1';
                    }
                    else
                    {
                         ans += '0';
                         carry = '1';
                    }
               }
               else if (s1[n] == '0' && s2[m] == '0')
               {
                    if (carry == '1')
                    {
                         ans += '1';
                         carry = '0';
                    }
                    else
                    {
                         ans += '0';
                    }
               }

               n--;
               m--;
          }
          while (n >= 0)
          {
               if (s1[n] == '0')
               {
                    if (carry == '1')
                    {
                         ans += '1';
                         carry = '0';
                    }
                    else
                    {
                         ans += '0';
                    }
               }
               else
               {
                    if (carry == '1')
                    {
                         ans += '0';
                         carry = '1';
                    }
                    else
                    {
                         ans += '1';
                    }
               }
               n--;
          }

          while (m >= 0)
          {
               if (s2[m] == '0')
               {
                    if (carry == '1')
                    {
                         ans += '1';
                         carry = '0';
                    }
                    else
                    {
                         ans += '0';
                    }
               }
               else
               {
                    if (carry == '1')
                    {
                         ans += '0';
                         carry = '1';
                    }
                    else
                    {
                         ans += '1';
                    }
               }

               m--;
          }

          if (carry == '1')
          {
               ans += '1';
          }

          reverse(ans.begin(), ans.end());

          int i = 0;
          while (ans[i] == '0')
          {
               i++;
          }

          return ans.substr(i);
     }
};

//  gfg
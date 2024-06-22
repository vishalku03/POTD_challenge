class Solution
{
public:
     bool check9(long long num)
     {
          while (num != 0)
          {
               if (num % 10 == 9)
                    return false;
               num /= 10;
          }
          return true;
     }
     long long ExtractNumber(string sentence)
     {

          vector<long long> get;
          long long ans = 0;
          for (char i : sentence)
          {
               if (i >= '0' && i <= '9')
               {
                    ans = ans * 10 + i - '0';
               }
               else
               {
                    get.push_back(ans);
                    ans = 0;
               }
          }
          long long maxi = -1;
          for (auto i : get)
          {
               if (i != 0 && check9(i))
               {
                    maxi = max(i, maxi);
               }
          }
          return maxi;
     }
};

//gfg
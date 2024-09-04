class Solution
{
public:
     int nthStair(int n)
     {

          int count = 1;
          if (n % 2 == 0)
          {
               count += 1;
               n = n / 2;
               count += n - 1;
          }
          else
          {
               n = n / 2;
               count += n;
          }

          return count;
     }
};

// return n/2+1;    -> akele hi kafi hai
//  gfg
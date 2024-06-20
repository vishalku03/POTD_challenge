class Solution
{
public:
     long long gcd(long long a, long long b)
     {
          if (b == 0)
          {
               return a;
          }
          else
          {
               return gcd(b, a % b);
          }
     }
     long long getEdgePoint(long long x1, long long y1, long long x2, long long y2)
     {
          if (x1 == x2)
          {
               return abs(y2 - y1) - 1;
          }
          if (y1 == y2)
          {
               return abs(x1 - x2) - 1;
          }
          return gcd(abs(x1 - x2), abs(y1 - y2)) - 1;
     }
     long long int InternalCount(long long int p[], long long int q[],
                                 long long int r[])
     {
          long long x1 = p[0];
          long long y1 = p[1];
          long long x2 = q[0];
          long long y2 = q[1];
          long long x3 = r[0];
          long long y3 = r[1];
          int points = getEdgePoint(x1, y1, x2, y2) + getEdgePoint(x2, y2, x3, y3) + getEdgePoint(x3, y3, x1, y1) + 3;
          long long area = abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
          return (area - points + 2) / 2;
     }
};

// gfg
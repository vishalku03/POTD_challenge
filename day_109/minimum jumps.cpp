class Solution
{
public:
     int minJumps(vector<int> &a)
     {
          // Your code here
          int n = a.size();
          if (a[0] == 0)
               return -1;

          int jumps = 0, mx_reachable = 0, ans = 0;
          for (int i = 0; i < n - 1; i++)
          {
               mx_reachable = max(mx_reachable, i + a[i]);
               if (i == ans)
               {
                    ans = mx_reachable;
                    jumps++;
               }
          }
          if (ans < n - 1)
               return -1;
          return jumps;
     }
};

// gfg
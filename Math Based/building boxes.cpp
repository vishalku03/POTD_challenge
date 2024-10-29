class Solution
{
public:
     int minimumBoxes(int n)
     {
          int u = n;
          vector<int> d = vector<int>();
          for (int i = 1; i <= u; i++)
          {
               double y = (pow(1 + 8 * i, 0.5) - 1) / 2;
               int k = (int)y;
               int r = i - (k * k + k) / 2;
               int p = (k - 1) * k / 2 + max(0, r - 1);
               d.push_back(i);
               if (p > 0)
               {
                    d[i - 1] += d[p - 1];
               }
               // cout << i <<" "<< d[i-1] <<" "<<y<<" "<<k<<" "<<r<<" "<<p <<" "<<r<<endl;
               if (d[i - 1] >= n)
               {
                    return i;
               }
          }
          return n;
     }
};

// leetcode - 1739
class Solution
{
public:
     long long int findMaxProduct(vector<int> &arr)
     {
          // Write your code here

          int z_cnt = 0, neg_cnt = 0, pos_cnt = 0, n = arr.size(), m = 1e9 + 7;

          if (n == 1)
               return arr[0];

          long long int pos_pro = 1;
          long long int neg_pro = 1;

          int neg_max = INT_MIN;

          for (int i = 0; i < n; i++)
          {
               if (arr[i] < 0)
               {
                    neg_cnt++;
                    neg_pro = (neg_pro * arr[i]) % m;
                    neg_max = max(arr[i], neg_max);
               }
               else if (arr[i] > 0)
               {
                    pos_cnt++;
                    pos_pro = (pos_pro * arr[i]) % m;
               }
               else
               {
                    z_cnt++;
               }
          }

          if ((z_cnt == n) || (neg_cnt == 1 and z_cnt == n - 1))
               return 0;

          if (neg_cnt == 1 and pos_cnt != 0)
               return pos_pro;

          if (neg_cnt % 2 == 1)
               neg_pro /= neg_max;

          if (pos_cnt == 0 and neg_cnt != 0)
               return neg_pro;

          return (neg_pro * pos_pro) % m;
     }
};
// gfg
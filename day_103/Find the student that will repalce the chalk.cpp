class Solution
{
public:
     int chalkReplacer(vector<int> &chalk, int k)
     {

          long long total_sum = accumulate(begin(chalk), end(chalk), 0LL);
          k = k % total_sum;
          for (int i = 0; i < chalk.size(); i++)
          {
               if (chalk[i] > k)
               {
                    return i;
               }
               else
               {
                    k = k - chalk[i];
               }
          }

          return -1;
     }
};

/// accumulate ;- find sum of the begina to end
// leetcode -  1894
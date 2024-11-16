class Solution
{
public:
     void pushZerosToEnd(vector<int> &arr)
     {
          // code here
          int n = arr.size();
          int k = 0;
          for (int i = 0; i < n; i++)
          {
               if (arr[i] > 0)
               {
                    arr[k] = arr[i];
                    k++;
               }
          }
          while (k < n)
          {
               arr[k] = 0;
               k++;
          }
     }
};

// gfg
class Solution
{
public:
     bool checkSorted(vector<int> &arr)
     {
          // code here.
          int cnt = 0;
          int n = arr.size();
          for (int i = 0; i < n; i++)
          {
               while (arr[i] != i + 1)
               {
                    swap(arr[i], arr[arr[i] - 1]);
                    cnt++;
                    i--;
               }
               if (cnt > 2)
                    return false;
          }
          return cnt == 2 || cnt == 0;
     }
};

// gfg
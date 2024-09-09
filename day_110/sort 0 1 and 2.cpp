class Solution
{
public:
     void sort012(vector<int> &arr)
     {
          // code here
          int low = 0;
          int high = arr.size() - 1;
          int mid = 0;

          while (mid <= high)
          {
               if (arr[mid] == 0)
               {
                    arr[mid] = arr[low];
                    arr[low] = 0;
                    low++;
                    mid++;
               }
               else if (arr[mid] == 2)
               {
                    arr[mid] = arr[high];
                    arr[high] = 2;
                    high--;
               }
               else
               {
                    mid++;
               }
          }
     }
};
// gfg
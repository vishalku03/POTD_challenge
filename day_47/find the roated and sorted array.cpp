class Solution
{
public:
     int search(vector<int> &arr, int key)
     {
          // complete the function here
          int s = 0, e = arr.size() - 1;
          while (s <= e)
          {
               int mid = s + (e - s) / 2;
               if (arr[mid] == key)
               {
                    return mid;
               }
               else if (arr[mid] >= arr[0])
               {
                    if (arr[s] <= key && arr[mid] >= key)
                         e = mid - 1;
                    else
                         s = mid + 1;
               }
               else
               {
                    if (arr[mid] < key && arr[e] >= key)
                         s = mid + 1;
                    else
                         e = mid - 1;
               }
          }
          return -1;
     }
};

// gfg
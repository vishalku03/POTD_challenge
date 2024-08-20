class Solution
{
public:
     int count(int arr[], int n, int x)
     {
          int s = 0;
          int e = n - 1;
          while (s <= e)
          {
               if (arr[s] == x && arr[e] == x)
               {
                    int mid = (e - s) + 1;
                    return mid;
               }
               else if (arr[s] == x)
               {
                    e--;
               }
               else if (arr[e] == x)
               {
                    s++;
               }
               else
               {
                    s++;
                    e--;
               }
          }

          return 0;
     }
};\

// gfg
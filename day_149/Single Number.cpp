//     int getSingle(vector<int>& arr) {

//         int x = 0;
//         for(int ans : arr)
//         {
//             x^=ans;
//         }
//         return x;
//     }
// };

// ham kisi bhi number ko 0 se XOR karte hai to hame uska odd or even
// find kar lete hai;

class Solution
{
public:
     int getSingle(vector<int> &arr)
     {
          sort(arr.begin(), arr.end());
          int n = arr.size();
          int count = 0;
          int ans = 0;
          for (int i = 0; i < n; i++)
          {
               if (arr[i] - arr[i + 1] == 0)
               {
                    count++;
                    i++;
               }
               else if (count == 0 || n % 2 == 1)
               {
                    ans = arr[i];
               }
          }
          return ans;
     }
};

// geeksforgeeks
class Solution
{
public:
     vector<int> reverseSubArray(vector<int> &arr, int l, int r)
     {
          // code here
          int s = l - 1;
          int e = r - 1;
          while (s < e)
          {
               swap(arr[s++], arr[e--]);
          }
          return arr;
     }
};

// gfg
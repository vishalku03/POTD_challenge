class Solution
{
public:
     string longestCommonPrefix(vector<string> arr)
     {
          // your code here

          int n = arr.size();
          sort(arr.begin(), arr.end());
          string ans = "";
          if (arr[0][0] != arr[n - 1][0])
               return "-1";

          for (int i = 0; i < arr[0].size(); i++)
          {
               if (arr[n - 1][i] != arr[0][i])
                    break;

               else
                    ans += arr[0][i];
          }

          return ans;
     }
};

/*

 1. sabse pahle ham ek n variable nayenge
 2. uske bad ham sort karenge.
 3. ek empty string ko  initialise  krenge,
    check krenge ki hmare vector ke first elment first index last elemnt
    last index equal nhi hai, it means no common element , it return -1

  gfg
*/


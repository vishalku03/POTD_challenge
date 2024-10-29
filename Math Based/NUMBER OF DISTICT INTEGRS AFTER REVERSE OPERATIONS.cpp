/*
3 step :
1. Inset n into set
2. Reverse n and intesert it to set
3. Ans is the size of the set
*/

class Solution
{
public:
     int countDistinctIntegers(vector<int> &nums)
     {
          unordered_set<int> ans;
          for (auto n : nums)
          {
               ans.insert(n);
               // reverse n
               int num = 0;
               while (n)
               {
                    num = num * 10 + n % 10;
                    n = n / 10;
               }
               ans.insert(num);
          }
          return ans.size();
     }
};

// leetcode 2442

/*
  let n =  31;
  int num = 0;

  num = num*10 +n%10; ->             >0*10 + 31%10 ->   remainder  -  1
  n  =  n/10 ;                       -> 31/10 = 3

*/
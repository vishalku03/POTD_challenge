class Solution
{
public:
     bool isSameAfterReversals(int num)
     {
          if (num == 0)
          { //  yaha dono tarf se hi 0 hi hai
               return true;
          }
          else if (num % 10 == 0)
          { // yaha smae nhi ho skat hai kabhi
               return false;
          }
          else
          {
               return true;
          }
     }
};

// leetcode - 2119
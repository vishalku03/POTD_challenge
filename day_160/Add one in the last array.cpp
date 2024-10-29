class Solution
{
public:
     vector<int> addOne(vector<int> &arr)
     {

          int n = arr.size();
          for (int i = n - 1; i >= 0; --i)
          {
               if (arr[i] < 9)
               {
                    arr[i] = arr[i] + 1;
                    return arr;
               }
               else
               {
                    arr[i] = 0; // this is where the last number is 9
                                //  then we put the 0
               }
          }

          arr.insert(arr.begin(), 1); // this is handle { 9,9,9,}

          return arr;
     }
};

// geeeksforgeeks
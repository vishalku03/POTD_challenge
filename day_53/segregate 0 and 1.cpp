class Solution
{
public:
     void segregate0and1(vector<int> &arr)
     {

          int count = 0;
          for (int i = 0; i < arr.size(); i++)
          {
               if (arr[i] == 0)
                    count++;
          }
          for (int i = 0; i < arr.size(); i++)
          {
               if (i >= count)
                    arr[i] = 1;

               else
                    arr[i] = 0;
          }
     }
};

// gfg
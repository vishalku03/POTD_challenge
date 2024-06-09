class Solution
{

public:
     void zigZag(int n, vector<int> &arr)
     {

          bool smaller = true, greater = false;

          for (int i = 0; i < n - 1; i++)
          {
               if (smaller && arr[i] > arr[i + 1])
                    swap(arr[i], arr[i + 1]);

               if (greater && arr[i] < arr[i + 1])
                    swap(arr[i], arr[i + 1]);

               swap(smaller, greater);
          }
     }
};

// gfg
class Solution
{
public:
     vector<int> find3Numbers(vector<int> &arr)
     {

          int n = arr.size();

          if (n < 3)
          {
               return {};
          }

          vector<int> smaller(n, 0);

          vector<int> larger(n, 0);

          smaller[0] = arr[0];

          for (int i = 1; i < n; i++)
          {

               smaller[i] = min(smaller[i - 1], arr[i]);
          }

          larger[n - 1] = arr[n - 1];
          for (int i = n - 2; i >= 0; i--)
          {

               larger[i] = max(larger[i + 1], arr[i]);
          }

          vector<int> ans;
          for (int i = 0; i < n; i++)
          {

               if (smaller[i] < arr[i] && arr[i] < larger[i])
               {

                    ans.push_back(smaller[i]);

                    ans.push_back(arr[i]);

                    ans.push_back(larger[i]);

                    break;
               }
          }

          return ans;
     }
};



// gfg
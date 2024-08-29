class Solution
{
public:
     // Complete this function
     // Function to sort the array according to frequency of elements.
     vector<int> sortByFreq(vector<int> &arr)
     {
          int n = arr.size();
          sort(arr.begin(), arr.end());
          vector<vector<int>> freq_arr(n + 1);

          int no = arr[0], freq = 1;
          for (int i = 1; i < n; i++)
          {
               if (arr[i] == no)
                    freq++;
               else
               {
                    freq_arr[freq].push_back(no);
                    freq = 1;
                    no = arr[i];
               }
          }
          freq_arr[freq].push_back(no);

          vector<int> ans;
          for (int f = n; f >= 0; f--)
          {
               vector<int> temp = freq_arr[f];
               for (int ele : temp)
               {
                    for (int i = 0; i < f; i++)
                    {
                         ans.push_back(ele);
                    }
               }
          }

          return ans;
     }
};

// gfg
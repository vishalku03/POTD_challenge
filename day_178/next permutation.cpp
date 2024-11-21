
class Solution
{
public:
     void nextPermutation(vector<int> &arr)
     {
          // code here
          // 2, 4, 7, 5,1,0
          vector<int> temp;
          int i;
          for (i = arr.size() - 1; i >= 0; i--)
          {
               temp.push_back(arr[i]); // if in squence then ok when order break look break
               if (arr[i] > arr[i - 1])
               {
                    i--;
                    break;
               }
          }
          if (i == -1)
          {
               sort(arr.begin(), arr.end());
               return;
          }
          temp.push_back(arr[i]);
          sort(temp.begin(), temp.end()); // sort target array
          int j;
          // find just greater number than target number
          for (j = 0; j < temp.size(); j++)
          {
               if (arr[i] < temp[j])
               {
                    break;
               }
          }
          arr[i] = temp[j]; // replace greter number then append other number
          int ii = 0;
          i++;
          for (; i <= arr.size(); i++)
          {
               if (j == ii)
                    ii++;
               arr[i] = temp[ii];
               ii++;
          }
          // find geter
     }
};

// gfg



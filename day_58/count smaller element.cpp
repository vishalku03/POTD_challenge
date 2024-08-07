class Solution
{
public:
     int binary(vector<int> v, int x)
     {
          int l = 0, h = v.size() - 1, mid;
          while (l <= h)
          {
               mid = (l + h) / 2;
               if (v[mid] == x)
                    return mid;
               else if (v[mid] > x)
                    h = mid - 1;
               else
                    l = mid + 1;
          }
          return -1;
     }
     vector<int> constructLowerArray(vector<int> &arr)
     {
          vector<int> v = arr, t;
          sort(v.begin(), v.end());
          for (int i = 0; i < arr.size(); i++)
          {
               int max = binary(v, arr[i]);
               while (max > 0 && v[max - 1] == v[max])
               {
                    max--;
               }
               t.push_back(max);
               v.erase(v.begin() + max);
          }
          return t;
     }
};

//  gfg
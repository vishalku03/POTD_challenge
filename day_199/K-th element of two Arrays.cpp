class Solution
{
public:
     int kthElement(vector<int> &a, vector<int> &b, int k)
     {
          // code here
          a.insert(a.end(), b.begin(), b.end());
          sort(a.begin(), a.end());
          return a[k - 1];
     }
};


// gfg
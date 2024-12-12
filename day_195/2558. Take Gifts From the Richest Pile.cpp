class Solution
{
public:
     long long pickGifts(vector<int> &gifts, int k)
     {
          long long ans = 0;
          priority_queue<int> vp;
          for (int i : gifts)
               vp.push(i);
          for (int i = 0; i < k; i++)
          {
               int a = vp.top();
               vp.pop();
               // cout<<a<<endl;
               a = sqrt(a);
               // cout<<a<<endl;
               vp.push(a);
          }
          while (!vp.empty())
          {
               ans += vp.top();
               vp.pop();
          }
          return ans;
     }
};
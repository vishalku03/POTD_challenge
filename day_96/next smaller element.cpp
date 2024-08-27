#include <stack>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
     stack<int> stack;
     stack.push(-1);
     vector<int> ans(n);

     for (int i = n - 1; i >= 0; i--)
     {
          int current = arr[i];
          while (stack.top() >= current)
               stack.pop();

          ans[i] = stack.top();
          stack.push(current);
     }

     return ans;
}
// coding ninjas
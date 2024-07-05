class Solution
{
public:
     // Function to find the vertical width of a Binary Tree.
     int levelorder(Node *root)
     {
          queue<pair<Node *, int>> q;
          q.push(make_pair(root, 0));
          int minn = 0;
          int pos = 0;
          int maxx = 0;
          while (!q.empty())
          {
               Node *temp = q.front().first;
               int datat = q.front().second;
               minn = min(minn, datat);
               maxx = max(maxx, datat);
               q.pop();
               if (temp == NULL)
               {

                    if (!q.empty())
                    {
                         Node *rr = NULL;
                         q.push(make_pair(rr, 0));
                    }
               }
               else
               {
                    if (temp->left)
                    {

                         q.push(make_pair(temp->left, datat - 1));
                    }
                    if (temp->right)
                    {

                         q.push(make_pair(temp->right, datat + 1));
                    }
               }
          }
          return maxx - minn + 1;
     }
     int verticalWidth(Node *root)
     {
          // code here
          if (root == NULL)
          {
               return 0;
          }
          int ans = levelorder(root);
          return ans;
     }
};

// gfg
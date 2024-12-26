class Solution
{
public:
     void levelOrderTraversal(TreeNode *root, vector<int> &result)
     {

          if (!root)
               return;

          queue<TreeNode *> q;
          q.push(root);

          while (!q.empty())
          {

               int n = q.size();
               int maxEleInLevel = INT_MIN;

               for (int i = 0; i < n; i++)
               {

                    TreeNode *node = q.front();
                    q.pop();

                    maxEleInLevel = max(maxEleInLevel, node->val);

                    if (node->left)
                         q.push(node->left);
                    if (node->right)
                         q.push(node->right);
               }

               result.push_back(maxEleInLevel);
          }
     }

     vector<int> largestValues(TreeNode *root)
     {

          vector<int> result;
          levelOrderTraversal(root, result);

          return result;
     }
};
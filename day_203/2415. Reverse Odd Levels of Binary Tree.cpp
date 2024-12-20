#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     TreeNode *reverseOddLevels(TreeNode *root)
     {
          if (root == NULL)
               return root;

          queue<TreeNode *> q;
          int level = 0;
          q.push(root);

          while (!q.empty())
          {
               int size = q.size();
               vector<TreeNode *> nodeVal;

               for (int i = 0; i < size; i++)
               {
                    TreeNode *node = q.front();
                    q.pop();
                    nodeVal.push_back(node);

                    if (node->left)
                         q.push(node->left);
                    if (node->right)
                         q.push(node->right);
               }

               if (level % 2 == 1)
               {
                    int n = nodeVal.size();
                    for (int i = 0; i < n / 2; i++)
                    {
                         swap(nodeVal[i]->val, nodeVal[n - i - 1]->val);
                    }
               }

               level++;
          }

          return root;
     }
};
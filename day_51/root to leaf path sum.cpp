class Solution
{
public:
     bool hasPathSum(Node *root, int target)
     {
          // Your code here

          if (root == NULL)
               return false;

          if (root->left == NULL && root->right == NULL && target - root->data == 0)
               return true;

          if (root->left == NULL && root->right == NULL && target - root->data != 0)
               return false;

          return hasPathSum(root->left, target - root->data) ||
                 hasPathSum(root->right, target - root->data);
     }
};

// gfg
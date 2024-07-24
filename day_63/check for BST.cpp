class Solution
{
public:
     // Function to check whether a Binary Tree is BST or not.
     bool isBST(Node *root)
     {
          // Your code here
          return checkBST(root, INT_MIN, INT_MAX);
     }

     bool checkBST(Node *root, long min, long max)
     {

          if (root == NULL)
          {
               return true;
          }

          if (root->data <= min || root->data >= max)
          {
               return false;
          }

          return checkBST(root->left, min, root->data) && checkBST(root->right, root->data, max);
     }
};



// gfg
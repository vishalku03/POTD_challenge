class Solution
{

public:
     void r(Node *root, vector<int> &v)
     {

          if (root == nullptr)
               return;

          v.push_back(root->data);

          r(root->left, v);

          r(root->right, v);
     }

     // Function to return a list of integers denoting the node

     // values of both the BST in a sorted order.

     vector<int> merge(Node *root1, Node *root2)
     {

          // Your code here

          vector<int> ans;

          r(root1, ans);

          r(root2, ans);

          sort(ans.begin(), ans.end());

          return ans;
     }
};

// gfg
class Solution
{
public:
     Node *prev = new Node(-1);

     void populateNext(Node *root)
     {
          // code here
          if (root == NULL)
          {
               return;
          }

          populateNext(root->left);

          prev->next = root;
          prev = root;

          populateNext(root->right);
     }
};

// gfg
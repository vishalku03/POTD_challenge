class Solution
{
public:
     Node *rec(Node *node)
     {
          if (node == NULL)
               return NULL;
          Node *l = rec(node->left);
          Node *r = rec(node->right);
          node->left = r;
          node->right = l;
     }
     void mirror(Node *node)
     {
          rec(node);
     }
};

// gfg
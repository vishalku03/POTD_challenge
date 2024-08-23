vector<int> leftView(Node *root)
{
     vector<int> result;
     if (root == NULL)
          return result;

     queue<pair<Node *, int>> q;
     q.push({root, 0});
     int max_level = -1;

     while (!q.empty())
     {
          Node *node = q.front().first;
          int level = q.front().second;
          q.pop();

          if (level > max_level)
          {
               result.push_back(node->data);
               max_level = level;
          }

          if (node->left != NULL)
               q.push({node->left, level + 1});

          if (node->right != NULL)
               q.push({node->right, level + 1});
     }

     return result;
}

// gfg
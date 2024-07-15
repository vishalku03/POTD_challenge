class Solution
{
public:
     TreeNode *createBinaryTree(vector<vector<int>> &descriptions)
     {

          unordered_map<int, TreeNode *> mp;
          unordered_set<int> st;

          for (auto desc : descriptions)
          {

               int p = desc[0];
               int c = desc[1];
               int left = desc[2];

               if (mp.find(p) == mp.end())
               {
                    mp[p] = new TreeNode(p);
               }

               if (mp.find(c) == mp.end())
               {
                    mp[c] = new TreeNode(c);
               }

               if (left == 1)
               {
                    mp[p]->left = mp[c];
               }
               else
               {
                    mp[p]->right = mp[c];
               }

               st.insert(c);
          }

          for (auto desc : descriptions)
          {

               int p = desc[0];

               if (st.find(p) == st.end())
               {
                    return mp[p];
               }
          }

          return nullptr;
     }
};


// LEETCODE - 2196
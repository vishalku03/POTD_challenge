class Solution
{
public:
     Node *removeAllDuplicates(struct Node *head)
     {
          // code here
          if (!head || !head->next)
          {
               return head;
          }
          vector<Node *> nodes;
          Node *curr = head;
          while (curr != NULL)
          {
               nodes.push_back(curr);
               curr = curr->next;
          }

          unordered_map<int, int> freq;
          for (Node *node : nodes)
          {
               freq[node->data]++;
          }
          Node *dummy = new Node(0);
          Node *prev = dummy;
          for (Node *node : nodes)
          {
               if (freq[node->data] == 1)
               {
                    prev->next = node;
                    prev = node;
               }
          }
          prev->next = nullptr;

          return dummy->next;
     }
};

// gfg
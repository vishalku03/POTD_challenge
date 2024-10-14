
class Solution
{
public:
     void deleteAlt(struct Node *head)
     {
          // Code here
          Node *temp = head;
          while (temp && temp->next)
          {
               Node *ans = temp->next->next;
               temp->next = ans;
               temp = ans;
          }
     }
};

// geeksforgeeks
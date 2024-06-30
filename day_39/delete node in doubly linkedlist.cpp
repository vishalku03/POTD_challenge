class Solution
{
public:
     Node *deleteNode(Node *head, int x)
     {

          if (x == 1)
               return head->next;

          for (Node *temp = head; temp != NULL; temp = temp->next)
          {

               if (x == 1)
               {
                    temp->prev->next = temp->next;
                    if (temp->next != NULL)
                         temp->next->prev = temp->prev;

                    return head;
               }
               x--;
          }
          return head;
     }
};

// gfg
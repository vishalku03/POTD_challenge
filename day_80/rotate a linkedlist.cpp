class Solution
{
public:
     // Function to rotate a linked list.
     Node *rotate(Node *h, int k)
     {
          Node *p = h, *q = h;

          while (k-- != 1)
          {
               p = p->next, q = q->next;
          }

          while (q->next)
          {
               q = q->next;
          }
          q->next = h, h = p->next, p->next = NULL;

          return h;
     }
};
// gfg
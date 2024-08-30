class Solution
{
public:
     // Function to find the length of a loop in the linked list.
     int countNodesinLoop(Node *head)
     {

          if (head == NULL)
               return 0;

          Node *slow = head;
          Node *fast = head;

          while (fast && fast->next)
          {
               slow = slow->next;
               fast = fast->next->next;

               if (fast == slow)
               {
                    int len = 1;
                    slow = slow->next;

                    while (slow != fast)
                    {
                         len++;
                         slow = slow->next;
                    }

                    return len;
               }
          }
          return 0;
     }
};

// gfg


class Solution
{
public:
     int Len(ListNode *head)
     {
          int l = 0;
          ListNode *temp = head;
          while (temp != nullptr)
          {
               temp = temp->next;
               l++;
          }
          return l;
     }
     ListNode *rotateRight(ListNode *head, int k)
     {
          if (head == NULL || head->next == NULL || k == 0)
               return head;
          int len = Len(head);
          int num = k % len;
          if (num == 0)
               return head;
          ListNode *tail = head;
          while (tail->next != NULL)
          {
               tail = tail->next;
          }
          tail->next = head; // Form a circular linked list

          // Find the new tail: len - num - 1 steps from the head
          ListNode *newTail = head;
          for (int i = 0; i < len - num - 1; i++)
          {
               newTail = newTail->next;
          }

          // The new head is the next node after the new tail
          ListNode *newHead = newTail->next;
          newTail->next = NULL; // Break the circular linked list

          return newHead;
     }
};

// leetcode - 61
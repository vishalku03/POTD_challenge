bool detectCycle(Node *head)
{
     if (head == NULL || head->next == NULL)
          return false;

     Node *slow = head;
     Node *fast = head;
     while (fast && fast->next != NULL)
     {
          slow = slow->next;
          fast = fast->next->next;

          if (slow == fast)
               return true;
     }

     return false;
}

// coding ninjas
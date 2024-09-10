class Solution
{
public:
     int gcd(int a, int b)
     {
          if (a == 0)
               return b;
          if (b == 0)
               return a;
          if (a > b)
               return gcd(a - b, b);
          else
               return gcd(a, b - a);
     }
     ListNode *insertGreatestCommonDivisors(ListNode *head)
     {
          ListNode *prev = head;
          ListNode *temp = head->next;

          while (temp)
          {
               int data = gcd(prev->val, temp->val);
               ListNode *ans = new ListNode(data);
               ListNode *tempkaaagevala = temp->next;
               prev->next = ans;
               ans->next = temp;

               prev = temp;
               temp = tempkaaagevala;
          }
          return head;
     }
};

// leetcode -  2807
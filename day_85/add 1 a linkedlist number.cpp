class Solution
{
public:
     int add(Node *n)
     {
          if (n == nullptr)
          {
               return 1;
          }
          int carry = add(n->next);
          int val = n->data;
          n->data = (val + carry) % 10;
          return (val + carry) / 10;
     }
     Node *addOne(Node *head)
     {
          // Your Code here
          // return head of list after adding one
          int c = add(head);
          if (c == 1)
          {
               Node *nh = new Node(1);
               nh->next = head;
               return nh;
          }
          return head;
     }
};

// gfg
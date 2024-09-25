class Solution
{
public:
     bool isPalindrome(Node *head)
     {

          string str = "";
          while (head != NULL)
          {
               str += head->data;
               head = head->next;
          }

          string s = str;
          reverse(s.begin(), s.end());
          if (s == str)
          {
               return true;
          }

          return false;
     }
};
// gfg
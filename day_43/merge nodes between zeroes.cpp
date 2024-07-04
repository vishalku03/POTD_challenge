class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode *curr =  new ListNode(0);
        ListNode *ptr =  curr;
        ListNode *temp =  head;
        temp = temp->next;
        int sum  = 0;

        while(temp != NULL)
        {
            while(temp->val != 0)
            {
                sum  =  sum + temp->val;
                temp =  temp->next;
            }
            ptr->next =  new ListNode(sum);
            ptr = ptr->next;
            temp =  temp->next;
            sum = 0;
        }
        return curr->next;
    }
};

// leetcode

class Solution {
  public:
    
    vector<Node*> alternatingSplitList(struct Node* head) {
        
        vector<Node*>ans;
        Node* dummy1 = new Node(-1);
        Node* dummy2 =  new Node(-1);
        Node* temp1 = dummy1;
        Node* temp2 = dummy2;
        bool flag  = true;
        
        while(head!=NULL)
        {
            if(flag)
            {
                temp1->next =  head;
                head =  head->next;
                temp1 =  temp1->next;
                flag =  false;
            }
            else
            {
                temp2->next = head;
                head =  head->next;
                temp2 =  temp2->next;
                flag =  true;
            }
        }
        temp1->next =  NULL;
        temp2->next =  NULL;
        
        return {dummy1->next, dummy2->next};
    }
};




//  geeksforgeeks
class Solution {
  public:
    
    struct Node {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }
    };
    
      int sumOfLastN_Nodes(struct Node* head, int n) {
        Node* fast= head, *slow= head;
        while(n--){
            fast= fast->next;
        }
        // cout<<fast->data<<endl;
        
        int ans= 0;
        while(fast){
            slow= slow->next;
            fast= fast->next;
        }
        
        while(slow){
            ans+= slow->data;
            slow= slow->next;
        }
        
        return ans;
    }
};


//  gfg
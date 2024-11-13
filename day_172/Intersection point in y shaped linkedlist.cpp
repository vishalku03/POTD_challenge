class Solution {
  public:
    // Function to find intersection point in Y shaped Linked Lists.
    int intersectPoint(Node* head1, Node* head2) {
        // Your Code Here
        unordered_set<Node*>st;
        Node* node=head1;
        while(node){
            st.insert(node);
            node=node->next;
        }
        node=head2;
        
        while(node){
            if(st.find(node)!=st.end()){
                return node->data;
            }
            node=node->next;
        }
        return -1;
    }
};


// gfg
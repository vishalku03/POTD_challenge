Node* removeKthNode(Node* head, int K)
{
    
 
    if (head == NULL) return NULL;
    
    // Step 1: Find the length of the linked list
    int length = 0;
    Node* temp = head;
    while (temp != NULL) {
        length++;
        temp = temp->next;
    }
    
    // Step 2: Calculate the position to remove from the beginning
    int pos = length - K;
    if (pos == 0) return head->next;  // If we need to remove the head node

    // Step 3: Remove the node at the calculated position
    temp = head;
    for (int i = 1; i < pos; i++) {
        temp = temp->next;
    }
    temp->next = temp->next->next;
    return head;
}


/*
;
 sabse  pahle  ham  length nikalene
 ham kis node ko delete karna hai usko decide karna hai
 phir usse delete karna hai
 ,,,, 
 delete ham us node ke next me us node ke next ke next ko asssign kae denge
*/

//  coding ninjas
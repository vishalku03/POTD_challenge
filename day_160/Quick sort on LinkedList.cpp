#include<bits/stdc++.h>
// Solution class with quickSort function
class Solution {
  public:
   int len(Node *head){
        Node *curr = head;
        int ans = 0;
        while(curr != nullptr){
            ++ans;
            curr = curr->next;
        }
        
        return ans;
    }
    struct Node* quickSort(struct Node* head) {
         int n = len(head);
        vector<int> temp(n);
        Node *curr = head;
        int ptr = 0;
        while(curr != nullptr){
            temp[ptr++] = curr->data;
            curr = curr->next;
        }
        sort(temp.begin(), temp.end());
        curr = head;
        for(auto &i : temp){
            curr->data = i;
            curr = curr->next;
        }
        return head;
        
        // code here
    }
};

// gfg
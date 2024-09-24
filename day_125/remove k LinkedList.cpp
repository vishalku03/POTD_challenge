#include<bits/stdc++.h>
using namespace std;
Node *rotate(Node *head, int k){

     if( head || head->next)
      return head;

 // Length nikale LinkedList ka 

   int Length = 1;
   Node* temp = head;
   while(temp->next != NULL)
   {
     Length++;
     temp = temp->next ;
   }

   int n =  Length - (k % Length);

   while(n--)
   {
     Node* curr = head;
     head =  head->next;
     curr->next =  NULL;
     temp->next = curr;
     temp =  curr;
   }

   return head;

};

// coding ninjas
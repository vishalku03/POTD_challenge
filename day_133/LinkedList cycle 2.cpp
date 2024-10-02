#include<bits/stdc++.h>
using  namespace std;
Node *firstNode(Node *head)

{
   if(head == NULL)return NULL;
   Node* temp  =  head;

   map<Node* , bool> visited;

   while(temp != NULL) {

     {
       if (visited[temp] == true)
         return temp;
     }
     visited[temp] = true;
     temp = temp->next;
   }
   return NULL;
}

// coding ninjas
// using map data structure
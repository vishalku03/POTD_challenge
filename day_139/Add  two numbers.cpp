
// Linkedlist questions
// coding ninjas
Node *addTwoNumbers(Node *first, Node *second)

{

     Node *temp1 = first;

     Node *temp2 = second;

     Node *dummyNode = new Node(-1);

     Node *curr = dummyNode;

     int carry = 0;

     while (temp1 != NULL || temp2 != NULL)
     {

          int sum = carry;

          if (temp1 != NULL)
          {

               sum = sum + temp1->data;
          }

          if (temp2 != NULL)
          {

               sum = sum + temp2->data;
          }

          // create new Node and add links

          Node *newNode = new Node(sum % 10);

          curr->next = newNode;

          curr = newNode;

          // update carry

          carry = sum / 10;

          if (temp1 != NULL)
          {

               temp1 = temp1->next;
          }

          if (temp2 != NULL)
          {

               temp2 = temp2->next;
          }
     }

     // check if carry is not 0 then create node and add it into end

     if (carry != 0)
     {

          Node *newNode2 = new Node(carry);

          curr->next = newNode2;
     }

     return dummyNode->next;
}



// this tyes of the questions is very related and make sure   practise and practise
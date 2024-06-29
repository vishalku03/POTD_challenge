bool areIdentical(struct Node *h1, struct Node *h2)
{
     while (h1 && h2)
     {
          if (h1->data != h2->data)
               return 0;
          h1 = h1->next;
          h2 = h2->next;
     }
     if (h1 != NULL || h2 != NULL)
          return 0;
     return 1;
}

///  gfg
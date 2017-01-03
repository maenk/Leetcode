struct ListNode* deleteDuplicates(struct ListNode* head) 
{
    struct ListNode*preptr=head;
    struct ListNode*ptr;
    if(head==NULL||head->next==NULL)
    {

    return head;
    }
  while(preptr->next!=NULL)
   {
       ptr=preptr->next;
   
    while(ptr!=NULL)
    {
    if(preptr->val==ptr->val)
    {
        preptr->next=ptr->next;
        free (ptr);
          if(preptr->next==NULL)
            {
               preptr=head;
                return preptr;
            }
          else
            {
                ptr=preptr->next;
            }
    }
    else
    ptr=ptr->next;
    }
    preptr=preptr->next;
   } 
   preptr=head;
}
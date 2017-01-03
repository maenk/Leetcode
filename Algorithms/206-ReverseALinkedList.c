struct ListNode* reverseList(struct ListNode* head) 
{
    struct ListNode* newlist = NULL;
    struct ListNode*ptr = head;
    struct ListNode*next;
    while (ptr != NULL)
    {
        next  = ptr->next;
    ptr->next = newlist;   
        newlist = ptr;
        ptr= next;
    }
    head = newlist;
}


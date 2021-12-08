ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int s=0;
    ListNode *l3=NULL;
    ListNode **node=&l3;
    while(l1!=NULL||l2!=NULL||s>0)
    {
        if(l1!=NULL)
        {
            s+=l1->val;
            l1=l1->next;
        }
        if(l2!=NULL)
        {
            s+=l2->val;
            l2=l2->next;
        }
        (*node)=new ListNode(s%10);
        s/=10;
        node=&((*node)->next);
    }        
    return l3;
}
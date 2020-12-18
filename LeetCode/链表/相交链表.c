/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//超出时间限制
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode* p=headA;
    struct ListNode* q=headB;
    while(p!=q)
    {
        p->next=NULL?headB:p->next;
        q->next=NULL?headA:q->next;
    }
    return q;
}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//这个就没超
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *p = headA;
    struct ListNode *q = headB;
    while(p!=q)
    {
        if(p)
            p = p->next;
        else
            p = headB;
        if(q)
            q = q->next;
        else
            q = headA;
    }
    return q;
}
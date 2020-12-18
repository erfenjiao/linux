//给定一个链表和一个特定值 x，对链表进行分隔，使得所有小于 x 的节点都在大于或等于 x 的节点之前。
//你应当保留两个分区中每个节点的初始相对位置。
//输入: head = 1->4->3->2->5->2, x = 3
//输出:        1->2->2->4->3->5
//我们可以用两个指针before 和 after 来追踪上述的两个链表。两个指针可以用于分别创建两个链表，然后将这两个链表连接即可获得所需的链表。
#include<stdio.h>
struct ListNode{
    int val;
    struct ListNode* next;
};
struct ListNode* partition(struct ListNode* head, int x)
{
    struct ListNode* h1=malloc(sizeof(struct ListNode));
    struct ListNode* h2=malloc(sizeof(struct ListNode));
    h1->next=head;
    h2->next=head;
    struct ListNode* p1=h1;
    struct ListNode* p2=h2;
    while(head)
    {
        if(head->val<x)
        {
            p1->next=head;
            p1=p1->next;
        }
        else
        {
            p2->next=head;
            p2=p2->next;
        }
        head=head->next;
    }
    p2->next=NULL;
    p1->next=h2->next;
    return h1->next;
}

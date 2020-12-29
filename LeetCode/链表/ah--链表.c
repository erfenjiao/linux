#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main()
{
    struct node *head,*p,*q,*t;
    int i,n,a;
    head=NULL;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        p=(struct node*)malloc(sizeof(struct node));
        p->data=a;
        p->next=NULL;
        if(head==NULL)
        {
            head=p; //如果这是第一个创建的结点，则将头指针指向这个结点
        }
        else
        {
            q->next=p; //如果不是第一个，则将上一个节点的后继节点指向当前结点     
        }
        q=p;         //指针q也指向这个结点
    }
    scanf("%d",&a); //读入待插入的数
    t=head;
    while(t!=NULL)
    {
        if(t->next==NULL || t->next->data>a) //
        {
            p=(struct node*)malloc(sizeof(struct node));
            p->data=a;
            p->next=t->next;
            t->next=p;
            break;
        }
        t=t->next;
    }
    t=head;
        while(t!=NULL)
        {
            printf("%d  ",t->data);
            t=t->next;
        }

}
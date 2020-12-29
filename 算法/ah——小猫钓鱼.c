#include<stdio.h>
struct queue//实现队列(people)
{
    int data[1000];
    int head;
    int tail;
};
struct stack //实现栈(table)
{
    int data[10];
    int top;
}
int main()
{
    //define
    struct queue q1,q2;
    struct stack s;
    //initialize
    q1.head=1; q1.tail=1;
    q2.head=0; q2.tail=1;
    s.top=0;
    for(int i=1;i<=6;i++) //xiao heng
    {
        scanf("%d",&q1.data[q1.tail]);
        q1.tail++;
    }
    for(int i=1;i<=6;i++)
    {
        scanf("%d",q2.data[q2.tail]);
        q2.tail++;    
    }
}
//链表：结构体变量与结构体变量联系在一起
//动态创建链表：动态内存申请+模块化设计
//1.创建链表（创建一个表头表示整个链表）
//2.创建节点
//3.插入节点
//4.删除节点
//5.打印，遍历链表（可以用来做测试）
#include<stdio.h>
#include<string.h>
struct ListNode{
    int data;
    struct ListNode* next;
};
//创建链表
struct ListNode* creatList()//表头不需要数据
{
    struct ListNode* headNode=(struct ListNode*)malloc(sizeof(struct ListNode));//动态内存申请，使结构指针变成结构体变量
   // headNode->data=1;    表头可以被初始化，也可以不初始化，通常不初始化，形成差异化，让我们知道哪一个是表头
    headNode->next=NULL;
    return headNode;
}
//创建节点，节点就是结构体变量，插入节点前必须要有
struct ListNode* creatNode(int data)//注意：有数据域
{
    struct ListNode* newNode=(struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}
//打印节点
struct ListNode* printNode(struct ListNode* headNode)
{
    struct ListNode* pmove=headNode->next;
    while(pmove) //移动到尾就结束
    {
        printf("%d",pmove->data);
        pmove=pmove->next; //打印一个移动一个
    }
    printf("\n");
}
//插入节点——头插法
struct ListNode* insertNode(struct ListNode* headNode,int data) //参数：插入哪个链表，插入节点的数据是什么
{
    struct ListNode* newNode=creatNode(data); //插入前要创建
    newNode->next=headNode->next;
    headNode->next=newNode;
}
//删除节点——指定位置删除
struct ListNode* delete(struct ListNode* headNode,int postData)//参数：那个链表，要删除的数据是什么
{
    struct ListNode* postNode=headNode->next;
    struct ListNode* postNodeFront=headNode;
    if(postNode==NULL)//条件：链表为空
    {
        printf("无法删除，链表为空。");
    }
    else
    {
        while(postNode->data!=postData)
        {
            postNodeFront=postNode;
            postNode=postNode->next;
            if(postNode==NULL)
            {
                printf("没有找到，无法删除");
                return 0;//直接结束掉函数
            }
        }
    }
    postNodeFront->next=postNode->next;
    free(postNode); //释放空间
}
int main()
{
    struct ListNode* list=creatList(); //创建链表
    insertNode(list,1); //插入节点
    insertNode(list,2);
    insertNode(list,3);
    printNode(list);   //打印节点
    delete(list,2);    //删除节点
    printNode(list);
    system("pause");
    return 0;
}
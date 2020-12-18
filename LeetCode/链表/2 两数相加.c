
//方法：初等数学  用变量来跟踪进位，并从包含最低有效位的表头开始模拟逐位相加的过程
#include<stdio.h>
struct ListNode{
    int val;
    struct ListNode* next;
};
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *head = NULL, *tail = NULL;
    int carry = 0;  //进位
    while (l1 || l2) //l1 或l2 不为零  即把l1,l2全部遍历一遍，不管长度是否相等
    {
        int n1 = l1 ? l1->val : 0; //逐步取值，直至较短的链表遍历完成
        int n2 = l2 ? l2->val : 0;//如果两个链表的长度不同，则可以认为长度短的链表的后面有若干个 0
        int sum = n1 + n2 + carry;//数值相加
        if (!head) //head为零，只看尾
        {
            head = tail = malloc(sizeof(struct ListNode));//分配空间
            tail->val = sum % 10;  //取余数
            tail->next = NULL;
        } 
        else  
        {
            tail->next = malloc(sizeof(struct ListNode));
            tail->next->val = sum % 10;//取值
            tail = tail->next;         //前进
            tail->next = NULL;         //指向空
        }
        carry = sum / 10; //取进位数
        if (l1) //如果l1不为零，l1向前移动，直至为零后，不再移动
        {
            l1 = l1->next; 
        }
        if (l2) //l2不为零，l2向前移动，直至为零
        {
            l2 = l2->next;
        }
    }//循环完毕
    if (carry > 0) //判断最高位是否有进位
    {
        tail->next = malloc(sizeof(struct ListNode));
        tail->next->val = carry; 
        tail->next->next = NULL; //表头最后指向NULL
    }
    return head; //返回链表
}
int main()
{

}
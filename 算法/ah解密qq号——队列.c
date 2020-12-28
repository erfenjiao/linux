#include<stdio.h>
int main()
{
    int tail=10,head=1;
    int q[102]={0,6,3,1,7,5,8,9,2,4};
    while(head<tail)
    {
        printf("%d",q[head]);//打印队首并将队首出队    
        head++;
        q[tail]=q[head];     //将新队首的数添加到队尾，并将队首出队
        tail++;
        head++;
    }
    getchar();
    getchar();
    return 0;
}
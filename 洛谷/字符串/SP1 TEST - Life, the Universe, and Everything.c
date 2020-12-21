//从输入读取数字并输出，每行一个，直到读到42停止。
#include<stdio.h>
int main()
{
    int a;
    while(1)
    {
        scanf("%d",&a);
        if(a==42)
            break;
        printf("%d\n",a);
    }
}
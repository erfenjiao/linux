#include<stdio.h>
int main()
{
    int t,n;
    int a[100];
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<t;i++)
    {
        if(a[i]%2==0)
            {
                printf("suantou\n");
            }
            else
            {
                printf("huaye\n");
            }
    }
}
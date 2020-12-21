#include<stdio.h>
int main()
{
    int n,t=0;
    int a[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&n);
    n=n+30;
    for(int i=0;i<10;i++)
    {
        if(n>=a[i])
        {
            t++;
        }
    }
    printf("%d",t);
}
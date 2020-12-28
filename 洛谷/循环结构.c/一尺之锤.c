#include<stdio.h>
int main()
{
    int n,t=1;
    scanf("%d",&n);
    while(n)
    {
        if(n==1)
        {
            break;
        }
        n/=2;
        t++;
    }
    printf("%d",t);
}
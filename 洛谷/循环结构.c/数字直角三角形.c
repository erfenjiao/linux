#include<stdio.h>
int main()
{
    int n,t=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            t++;
            if(t<10)
            {
                printf("0%d",t);
            }
            else
            {
                printf("%d",t);
            }
        }
        printf("\n");
    }
}
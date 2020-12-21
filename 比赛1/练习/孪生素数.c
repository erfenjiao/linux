#include<stdio.h>
#include<math.h>
int  prime(int x)
{
    int i;
    for(i=2;i<x;i++)
    {
        if(x==1 || x==2)
        {
            return 1;
        }
        if(x%i==0)
        {
            return -1;
        }
    }
    return 1;
}
int main()
{
    int n,m,a[1000]={0};
    int t=0,k=0;
    scanf("%d%d",&m,&n);
    for(int i=m;i<=n;i++)
    {
        if(prime(i)==1)
        {
            a[k]=i;
            k++;
        }
    }
    for(int i=0;a[i]!=0;i++)
       {
            if((a[i+1]-a[i])==2)
            t++;
       }
    
    printf("%d",t);
}
# include <stdio.h>
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
    int i,j,m,n,flag,a[1000]={0},b=0;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
       if(prime(i)==1)
        {
            a[j]=i;
            j++;
        }
    }
    int k=0;
    for(i=0;a[i]!=0;i++)
    {
        for(j=i+1;a[j]!=0;j++)
        {
            if(((a[j]-a[i]))==2)
                k++;
        }
    }
    printf("%d\n",k);
}

//给定数n，求n!的p进制下有多少个后导零。非常简单。
//为了简化问题，p保证为素数。
//第一行给定一个数t，表示有t组输入
//接下来t行，每行给定两个数n,p；意义如题所示；
//输入范围：(t<=1000)  (1<=n<=1000000 ） (2<=p<=1000000)
#include<stdio.h>
int main()
{
    int t,n,p,k;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int count=0;
        scanf("%d%d",&n,&p);
        for(int i=p;i<=n;i+=p)
        {
            k=i;
            while(k%p==0)
        {
            count++;
            k/=p;
        }
        }
     printf("%d\n",count);
    }
}
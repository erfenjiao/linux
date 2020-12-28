//试计算在区间 1 到 n 的所有整数中，数字x(0≤x≤9)共出现了多少次？
#include<stdio.h>
int main()
{
    long long n,x,t=0,b,c;
    scanf("%lld %lld",&n,&x);
    for(int i=1;i<=n;i++)
    {
        b=i;
        while(b!=0)
        {
            c=b%10;
            b=b/10;
            if(c==x)
                t++;
        }
    }
    printf("%lld",t);
}
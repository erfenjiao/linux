#include<stdio.h>
int main()
{
    int n,k,a=0,t=0;
    int sum;
    scanf("%d %d",&n,&k);
    sum=n*(n+1)/2;
    for(int i=k;i<=n;i+=k)
    {
        a+=i;
        t++;
    }

    printf("%.1lf %.1lf",a/(t*1.00),(sum-a)/((n-t)*1.00));
}
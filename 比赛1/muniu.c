#include<stdio.h>
#define p 3.1415926535
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,b,r,h,mid,t;
        double x;
        scanf("%d%d%d%d",&a,&b,&r,&h);
        if(a>b)
        {
            t=a;
            a=b;
            b=t;
        }
        if(b-a>180)
            mid=360-b+a;
        else
            mid=b-a;
        x=h*h+((mid*p*r)/180.0)*((mid*p*r)/180.0);
        printf("%.2lf\n",x);
    }
    return 0;
}
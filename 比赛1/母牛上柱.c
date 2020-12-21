#include<stdio.h>
#include<math.h>
#define PI 3.1415926535
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int a,b,r,h,mid;
        double x;
        scanf("%d%d%d%d",&a,&b,&r,&h);
        if(fabs(b-a)>180)
        {
            mid=360-fabs(b-a);
        }
        else
        {
            mid=fmal(b-a);
        }
        x=h*h+((mid*PI*r)/180.0)*((mid*PI*r)/180.0);
        printf("%.2lf",x);
    }
    return 0;


}
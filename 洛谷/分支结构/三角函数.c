#include<stdio.h>
int main()
{
    int a,b,c,max=-1,min=1000000001;
    scanf("%d%d%d",&a,&b,&c);
    if(a<min) min=a;
    if(b<min) min=b;
    if(c<min) min=c;
    if(a>max) max=a;
    if(b>max) max=b;
    if(c>max) max=c;
    int x=max,y=min;
    //约分，求最大公因数，并同时除
    while(x!=y)
    {
       if(x>y) x=x-y;
       else y=y-x;
    }
    min=min/x;
    max=max/x;
    printf("%d/%d",min,max);
}
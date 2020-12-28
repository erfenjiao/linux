#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
typedef struct Stu{
    int m;
    int v;
    int x;//价格比
}stu;
int cmp(const void *a,const void *b)
{
    stu c=*(stu*)a;
    stu d=*(stu*)b;
    return d.x-c.x;
}
int main()
{
    int i,n,t;
    double sum=0;
    stu a[110];
    scanf("%d %d",&n,&t);//n堆金币，承重为t
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&a[i].m,&a[i].v);
        a[i].x=a[i].v/a[i].m;
    }
    qsort(a+1,n,sizeof(a[0]),cmp);
    for(i=1;i<=n;i++)
    {
        if(t>a[i].m)
        {
            t=t-a[i].m;
            sum+=a[i].v;
        }
        if(t<a[i].m && t>0)
        {
            sum+=a[i].x*t;
            t=0;
        }
    }
    printf("%.2lf",sum);
}
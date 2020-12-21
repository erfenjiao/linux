//递推 斐波纳挈 模拟 数论
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
   double f[50];
   scanf("%d",&n);
   f[0]=0;
   f[1]=1;
   f[2]=1;
   for(i=3;i<=n;i++)
   {
       f[i]=f[i-1]+f[i-2];
   }
   printf("%.2lf",f[n]);
}
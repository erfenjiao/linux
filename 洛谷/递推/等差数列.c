// 一行 3个整数 a_1, a_2, na 
//  ,n，表示等差数列的第 1,21,2 项以及项数。
#include<stdio.h>
int main()
{
    long long a1,a2,n,d;
    scanf("%lld %lld %lld",&a1,&a2,&n);
    d=a2-a1;
    printf("%lld",n*a1+1/2*n*(n-1)*d);

}
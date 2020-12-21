//计算 1+2+3+\cdots+(n-1)+n1+2+3+⋯+(n−1)+n 的值，其中正整数 nn 不大于 100.你不被允许使用等差数列求和公式直接求出答案。
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("%d",sum);
}

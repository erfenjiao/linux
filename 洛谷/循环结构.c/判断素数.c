#include<stdio.h>
int check[100000001]={0};//标0的时素数，标1的是非素数
    int prime[1000001]={0};
int main()
{
    int n,q,cnt=0;
    scanf("%d %d",&n,&q);
    check[1]=1;
    for(int i=2;i<=n;i++)
    {
        if(!check[i])
        {
            prime[cnt++]=i;//若当前数i没有被之前所有数筛掉，表明i是素数
            for(int j=0;j<cnt && i*prime[j]<100000001;j++)
            {
                check[i*prime[j]]=1;//将素数prime[j]的i倍标记为合数，注意不能超过上限
                if(i%prime[j]==0)   //关键步骤，保证每个合数只被筛一次
                    break;  
            }
        }
        for(int i=0;i<q;i++)
        {
            scanf("%d",&n);
            printf("%d\n",prime[n-1]);//因为素数表从零开始存，所以下标减一
        }
    }
}
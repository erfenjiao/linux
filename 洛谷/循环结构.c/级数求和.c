//已知：S_n= 1+1/2+1/3+…+1/nS n=1+1/2+1/3+…+1/n。显然对于任意一个整数 k，当 n足够大的时候，Sn>k 。
//现给出一个整数 k，要求计算出一个最小的 n，使得 Sn>k 
#include<stdio.h>
int main()
{
    double Sn;
    int k,n=0;
    scanf("%d",&k);
    for(Sn=0;Sn<=k;++n,Sn+=1.0/n);
    printf("%d",n);
}
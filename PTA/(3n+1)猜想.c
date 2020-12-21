// 卡拉兹(Callatz)猜想：
// 对任何一个正整数 n，如果它是偶数，那么把它砍掉一半；如果它是奇数，那么把 (3n+1) 砍掉一半。这样一直反复砍下去，最后一定在某一步得到 n=1
// 对给定的任一不超过 1000 的正整数 n，简单地数一下，需要多少步（砍几下）才能得到 n=1？
#include<stdio.h>

int main()
{
int n,count=0;
scanf("%d",&n);
while(n!=1)
{
switch(n%2)
{
case 0 : 
n=n/2;
count++;
break;
case 1 : 
n=(3*n+1)/2;
count++;
break;
default : break;
}
}
printf("%d",count);
return 0;
}
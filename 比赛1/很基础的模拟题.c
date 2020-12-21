// 给你一个长度为n的数组，现在定义以下三种操作。
// "1 x"表示删除数组的第x(1<=x<=m)个元素，第x+1到第m个元素全部往前移一位。m为操作前数组的元素个数。
// "2 x y"表示在数组的第x(1<=x<=m)位插入元素y，原数组的第x个元素到第m个元素全部往后移一位。m为操作前数组的元素个数。
// "3 x"表示从数组第x(1<=x<=m)个元素开始与 第x位元素的值相等且连续的一整段数合并到数组的第x位，
//剩余元素依次前移。m为操作前数组的元素个数。
#include<stdio.h>
int a[110],n;
void caozuoyi(int x)
{
	for(int i=x-1;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	return ;
}
void caozuoer(int x,int y)//数组后面为什么会有0
{
	n++;
	for(int i=n;i>=x-2;i--) 
	{
		a[i]=a[i-1];
	}
	a[x-1]=y;
	return ;
}
void caozuosan(int x)
{
	int t=0;
	for(int i=x-1;i<n;i++)
	{
		if(a[i]==a[x])
			t++;
		else 
			break;
		
	}
	a[x] = a[x] * t;//合并值到第x位
    for(int i = x + t; i <= n; i++){
        a[++x] = a[i];//将剩下的元素往前挪动
    }
    n -= t - 1;//记得改变n的值
}
int main()
{
	int q,x,y,flag;
	scanf("%d %d",&n,&q);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<q;i++)
	{
		scanf("%d",&flag);
		if(flag==1) //操作一
		{
			scanf("%d",&x);
			caozuoyi(x);
			for(int i=0;i<n-1;i++)
			{
				printf("%d ",a[i]);
			}
			printf("\n"); 
		}
		if(flag==2)  //操作二
		{
			scanf("%d %d",&x,&y);
			caozuoer(x,y);
			for(int i=0;i<n+1;i++)
			{
				printf("%d ",a[i]);
			}
			printf("\n");
		}
		if(flag==3)  //操作三
		{
			scanf("%d",&x);
			caozuosan(x);
			for(int i=0;i<n;i++)
			{
				printf("%d ",a[i]);
			}
			printf("\n");
		}
	}
	
}
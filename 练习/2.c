#include<stdio.h>
int main()
{
	int m,n,i,j;
	int a[100010],b[100010],flag[100010]={0}; 
	scanf("%d %d",&m,&n);
	for(i=1;i<=m;i++)
	{
		scanf("%d",&a[i]);
		flag[a[i]]=1;
	}
	for(j=1;j<=n;j++)
	{
		scanf("%d",&b[j]);
	}
	for(j=1;j<=n;j++)
	{
		if(flag[b[j]]==1)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}

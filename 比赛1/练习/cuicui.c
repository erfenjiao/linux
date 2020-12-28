#include<stdio.h>
int main()
{
	double a[1001],b[1001],n,k;
	int i,j,t;
	double sum=0.00;
	scanf("%lf",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lf",&a[i]);
		b[i]=a[i];
	}
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			if(b[j]>b[j+1])
			{
				t=b[j];b[j]=b[j+1];b[j+1]=t;
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]==b[i])
		{
			printf("%d \n",i);
		}
	}
	for(i=1;i<=n;i++)
	{
		sum+=(n-i)*b[i];
	}
	k=sum/n;
	printf("%.2lf",k);
	return 0;
}

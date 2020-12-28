#include<stdio.h>
int main()
{
	int n,i,j,t,a[100001],b[1000001],count;
	while(scanf("%d",&n)!=EOF && n!=0)
	{
		for(i=0;i<n;i++)
		scanf("%d %d",&a[i],&b[i]);
		for(i=0;i<n-1;i++)
			for(j=i+1;j<n;j++)
			{
				if(b[i]>b[j])
				{
					t=a[i];a[i]=a[j];a[j]=t;
					t=b[i];b[i]=b[j];b[j]=t;
					
				}
			}
		t=b[0];
		count =1;
		for(i=1;i<n;i++)
		{
			if(t<=a[i])
			{
				count++;
				t=b[i];
			}
		}
		printf("%d",count); 
	}
}

#include<stdio.h>
int main()
{
	int n,i,start,end,m,j,h,s=0,k=0;
	int a[99999],b[99999];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	for(j=0;j<m;j++)
	{
		scanf("%d %d",&start,&end);
		k=end-start+1;
		i=start;
		for(h=k;h>0;h--)
		{
			b[j]+=a[i]*h;
			i++;
		}
        s+=b[j];
	}
	printf("%d",s-1000000007*(s/1000000007));
	return 0;
}
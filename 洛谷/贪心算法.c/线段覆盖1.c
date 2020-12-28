#include<stdio.h>
int n;
struct data
{
	int a;
	int b;
}c[1000001];

void quicksort1(int l,int r)
{
	int i,j,t,temp;
	if(l>r)
	return ;
	temp=c[l].b;
	i=l;
	j=r;
	while(i!=j)
	{
		while(c[j].b>=temp && i<j)
		j--;
		while(c[i].b<=temp && i<j)
		i++;
		if(i<j)
		{
			t=c[i].b;
			c[i].b=c[j].b;
			c[j].b=t;
		}
	}
	c[l].b=c[i].b;
	c[i].b=temp;
	quicksort1(l,i-1);
	quicksort1(i+1,r);
	return ;
}
void quicksort2(int left,int right)
{
    int i,j,t,temp;
    if(left>right)
        return;
    temp=c[left].a;
    i=left;
    j=right;
    while(i!=j)
	{
		while(c[j].a>=temp && i<j)
		    j--;
		while(c[i].a<=temp && i<j)
		    i++;
		if(i<j)
		{
			t=c[i].a;
			c[i].a=c[j].a;
			c[j].a=t;
		}
	}
	c[left].a=c[i].a;
	c[i].a=temp;
	quicksort2(left,i-1);
	quicksort2(i+1,right);
	return ;
}

int main()
{
	int i;
    int sum=1,min;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d %d",&c[i].a,&c[i].b);
	}
	quicksort1(1,n);
    quicksort2(1,n);
	min=c[1].b;
    for(i=2;i<=n;i++)
    {
    	if(min<=c[i].a)
    	{
    		sum++;
    		min=c[i].b;
		}
	}
	printf("%d",sum);
	return 0;
}

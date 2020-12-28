#include<stdio.h>
int n;
struct c{
    int num;
    int b;
}c[1000001];
void quicksort(int left,int right)
{
	int i,j,t,temp;
	if(left>right)
	    return ;
	temp=c[left].b;
	i=left;
	j=right;
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
	c[left].b=c[i].b;
	c[i].b=temp;
  //  c[left].num=c[i].num;
   // c[i].num=temp;
	quicksort(left,i-1);
	quicksort(i+1,right);
}
int main()
{
    int i,j;
    double time=0.00;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&c[i].b);
        c[i].num=i;
    }
    quicksort(1,n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",c[i].num);
    }
    printf("\n");
    for(j=n-1;j>=1;j--)
    {
        i=n-j;//这是个规律，当前最少时间的人序号和要等待的人数之和=n
        time+=c[i].b*j;
    }
     printf("%.2lf",time/n);//算平均，保留两位小数
     return 0; 

}

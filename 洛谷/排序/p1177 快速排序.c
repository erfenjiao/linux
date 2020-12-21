#include<stdio.h>
int a[1000001],n;
void quicksort(int left,int right)
{
    int i,j,temp,t;
    temp=a[left];
    i=left;
    j=right;
    if(left>right)
        return ;
    while(i!=j)
    {
        while(i<j && a[j]>=temp)
            j--;
        while(i<j && a[i]<=temp)
            i++;
        if(i<j)
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    a[left]=a[i];
    a[i]=temp;
    quicksort(left,i-1);
    quicksort(i+1,right);
}
int main()
{
    int i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(1,n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
}
#include<stdio.h>
int main()
{
    int k,sum=0,day=1,j=1;//day 日薪；j 每一阶日薪所持续的时间
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
        sum+=day;
        if(day==j)
        {
            day++;
            j=0;
        }
        j++;
    }
    printf("%d",sum);
}
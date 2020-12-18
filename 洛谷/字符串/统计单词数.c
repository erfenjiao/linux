#include<stdio.h>
#include<string.h>
int main()
{
	char a[11],b[1000001];
	gets(a);
	gets(b);
	strcat(a," ");
	strcat(b," ");
	int rec,i,j,k,ss=0,n=0,s;
	for (i = 0; a[i] != '\0'; i++)
    {  //全部转换成小写来判断
        if (a[i] >= 'a')
            a[i] -= 'a' - 'A';
    }
    for (i = 0; b[i] != '\0'; i++) 
	{
        if (b[i] >= 'a')
            b[i] -= 'a' - 'A';
    } //统一ab的大小写 
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]==' ')
		{
			s=1;
			for(j=n,k=0;j<=i,a[k]!='\0';j++,k++) //j=n，j++也就相当于n在加  j<=i 判断必须在i的范围之内，不能忘
			{
				if(b[j]==a[k])
				{
					s*=1; //用s来记录各个位能否对应，有一个没对应s就变为零
				}
				else
				{
					s*=0;
				}
			}
			if(s==1)
			{
				ss++;//都对应下来了则次数加1
			}
			if(ss==1 && s==1)
			{
				rec=n; //计算第一次符合的位数
			}
			n=i;
			n++; //跳过空格
		}
	}
	if(ss==0)
	{
		ss=-1;
		printf("%d",ss);
	}
	else if(ss>=1)
	{
		printf("%d %d",ss,rec);
	}
	
}
//给定一个字符串询问能否通过删除一些字母使其变为“heidi”。
//如果可以输出“YES”，不然为“NO”
#include<stdio.h>
int main()
{
    char a[6]="heidi",b[1001];
    int i=0,j=0,sum=0;
    scanf("%s",b);
    while(b[i]!='\0')
    {
       if(b[i]==a[j])
        {
            j++;
            sum++;

        }
        i++;
    }
    if(sum==5)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
}

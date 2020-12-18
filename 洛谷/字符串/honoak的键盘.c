//至多改变一个字符 VV VK KV KK
#include<stdio.h>

int main()
{
    char s[201];
    int n,t=0;
    scanf("%d",&n);
    scanf("%s",s);
    for(int i=0;i<n;i++)
    {
        if(s[i]=='V' && s[i+1]=='K')
        {
            t++;
            s[i]='X';
            s[i+1]='X';
        }
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]!='X' && s[i]==s[i+1])
        {
            t++;
            break; //加一个break很重要！
        }
    }
    printf("%d",t);
}
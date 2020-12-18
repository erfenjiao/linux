#include<stdio.h>
#include<string.h>
int main()
{
    int t=0,len;
    int a[26]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
    char s[201];
    gets(s);
    len=strlen(s);
    for(int i=0;i<len;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            t+=a[s[i]-'a'];
        }
        if(s[i]==' ')
        {
            t++;
        }
    }
    printf("%d",t);
}
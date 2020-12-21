// 1 str：后接插入，在文档后面插入字符串 str，并输出文档的字符串。
//extern char *strcat(char *dest,const char *src);   strcat 函数将 src 串拼接到 dest串之后
// 2 a b：截取文档部分，只保留文档中从第 a 个字符起 b 个字符，并输出文档的字符串。
//extern char *strcpy ( char *dest,const char *src);  将src串复制到dest串
//首先，将s串a+b及以后舍去，再将a及以后复制到in中，最后将in中的复制到str中。
// 3 a str：插入片段，在文档中第 a 个字符前面插入字符串 str，并输出文档的字符串。
//首先，将s串中第a位及以后接到in串中，再将in串接到s串第a位
// 4 str：查找子串，查找字符串 str 在文档中最先的位置并输出；如果找不到输出 -1。
//extern char*strstr(const *str1,const *str2)
//strstr函数在str1串内查找 str2 串的位置，如未找到，则返回 NULL
// 为了简化问题，规定初始的文档和每次操作中的 str 都不含有空格或换行。最多会有 q(q≤100) 次操作
#include<stdio.h>
#include<string.h>
int main()
{
    char s[101],in[101];
    int n;
    int opt;
    scanf("%d%s",&n,s);//n次操作
    for(int i=0;i<n;i++)
    {
        scanf("%d",&opt);
        if(opt==1)
        {
            scanf("%s",in);
            strcat(s,in);
            printf("%s\n",s);
        }
        if(opt==2)
        {
           int a,b;
           scanf("%d,%d",&a,&b);
           s[a+b]='\0';
           strcpy(in,&s[a]);
           strcpy(s,in);
           printf("%s\n",s);
        }
        if(opt==3)
        {
            int a;
            scanf("%d%s",&a,in);
            strcat(in,&s[a]);
            strcat(&s[a],in);
            printf("%s\n",s);
        }
        if(opt==4)
        {
            scanf("%s",in);
            char t;
            t=strstr(s,in);
            if(t!=NULL)
            {
                printf("%d\n",int(t-s));        
            }
            else
            {
                printf("%d\n",-1);
            }
            
        }
    }
}
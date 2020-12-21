//一个长度为 l(3\le l\le255)l(3≤l≤255) 的字符串中被反复贴有 boy 和 girl 两单词
//，后贴上的可能覆盖已贴上的单词（没有被覆盖的用句点表示），最终每个单词至少有一个字符没有被覆盖。问贴有几个 boy 几个 girl？
// 拿boy举例
// 因为是覆盖的，所以如果是 b 就一定有一个boy
// 如果是 o ，就要分两种情况：
// 1:前面是 b ，那就是同一个单词
// 2:前面不是 b ，那就是被覆盖的单词， 是另一个单词，即另一个boy
// y 同理，如果前面是 o ，那就是同一个单词，若果不是 o ，就是另一个单词
// girl也是一样
#include<stdio.h>
#include<string.h>
int main()
{
    char s[256];
    int boy=0,girl=0;
    scanf("%s",s);
    int len=strlen(s);
    for(int i=0;i<len;i++)
    {
        if(s[i]=='b') boy++;
        if(s[i]=='o'&&s[i-1]!='b') boy++;
        if(s[i]=='y'&&s[i-1]!='o') boy++;
        if(s[i]=='g') girl++;
        if(s[i]=='i'&&s[i-1]!='g')girl++;
   	    if(s[i]=='r'&&s[i-1]!='i')girl++;
   	    if(s[i]=='l'&&s[i-1]!='r')girl++;
    }
    printf("%d,%d",boy,girl);
}
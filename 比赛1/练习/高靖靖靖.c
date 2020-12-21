//2^233+33
#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long int  n=1;
    for(int i=1;i<=33;i++)
    {
        n=n*2;
    }
    printf("%lld",n+33);
}
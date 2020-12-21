#include<stdio.h>
int main()
{
    int N,n,i,j,num=1;
    int a[15][15]={0};
    scanf("%d",&N);
    if(N%2!=0) //奇阶
        a[N/2][N/2]=N*N;
    for(n=0;n<N/2;n++)//行数与圈数相关,对角线
    {
        //向右
        for(j=n;j<N-n-1;j++)
        {
            a[n][j]=num++;
           // printf("%3d",a[n][j]);
        }
       // printf("\n");
        //向下
        for(i=n;i<=N-n-1;i++)
        {
            a[i][N-n-1]=num++;
       //     printf("%3d",a[i][N-n]);
        }
      //  printf("\n");
        //向左
        for(j=N-n-2;j>n;j--)
        {
            a[N-n-1][j]=num++;
        }
        //向上
        for(i=N-n-1;i>=n+1;i--)
        {
            a[i][n]=num++;
        }

    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
}
#include<stdio.h>
void main()
{
    int i,j,n=5;
    for(i=1;i<=n;i++)// i=3
    {
        for(j=1;j<=n-i;j++)// 5-3=2
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)// j=1 to 3
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
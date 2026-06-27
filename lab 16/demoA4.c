#include<stdio.h>
void main()
{
    int i,j,sum[2][2];
    int a[2][2],b[2][2];
    for(i=0;i<2;i++)
    {
         for(j=0;j<2;j++)
        {
            printf("enter elements:");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
         for(j=0;j<2;j++)
        {
            printf("enter elements:");
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
         for(j=0;j<2;j++)
        {
            sum[i][j]=a[i][j] + b[i][j];
        }
    }
    for(i=0;i<2;i++)
    {
         for(j=0;j<2;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}
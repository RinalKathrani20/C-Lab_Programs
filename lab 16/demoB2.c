//perform multiplication of two matrices
#include<stdio.h>
void main()
{
    int n,i,j,k;
    printf("enter n:");
    scanf("%d",&n);

    int a[n][n];
    int b[n][n];
    int c[n][n];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }

    printf("matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

}
#include<stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int *p, *q, *r;
    int row, col, i, j;

    printf("Enter rows and columns: ");
    scanf("%d%d",&row,&col);

    p = &a[0][0];
    q = &b[0][0];
    r = &c[0][0];

    printf("Enter first matrix:\n");
    for(i=0;i<row*col;i++)
    {
        scanf("%d",p+i);
    }

    printf("Enter second matrix:\n");
    for(i=0;i<row*col;i++)
    {
        scanf("%d",q+i);
    }

    for(i=0;i<row*col;i++)
    {
        *(r+i)=*(p+i)+*(q+i);
    }

    printf("Addition of matrices:\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
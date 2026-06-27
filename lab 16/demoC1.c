#include<stdio.h>

int main()
{
    int  r, c, i, j;
    int zero=0, nonzero=0;

    printf("Enter rows and columns: ");
    scanf("%d%d",&r,&c);

    int a[r][c];

    printf("Enter matrix:\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);

            if(a[i][j]==0)
                zero++;
            else
                nonzero++;
        }
    }

    if(zero>nonzero)
        printf("Sparse Matrix");
    else
        printf("Not a Sparse Matrix");

    return 0;
}
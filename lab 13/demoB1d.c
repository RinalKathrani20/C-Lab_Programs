#include<stdio.h>
void main()
{
    int i,j,n=5,a=1;
    char s='A';
    for(i=1;i<=n;i++)
    {
        a=1;
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                printf("%c ",s++);
            }
            else
            {
                printf("%d ",a++);
            }
        }
        printf("\n");
    }
}
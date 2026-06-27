#include<stdio.h>
void main()
{
    int a[20][2];
    int i,j,m,n;

    for(i=0;i<20;i++)
    {
        printf("enter roll no.:");
        scanf("%d",&a[i][0]);
        printf("enter marks:");
        scanf("%d",&a[i][1]);
    }
    for(i=0;i<20;i++)
    {
        printf("%d %d",a[i][0],a[i][1]);
        printf("\n");
    }

}
        
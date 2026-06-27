//Copy all elements of one array to another.
#include<stdio.h>
void main()
{
    int n,i;
    printf("enter size:");
    scanf("%d,&n");
    int a[n],b[n];

        for(i=0;i<n;i++)
    {
        printf("enter elements:");
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    for(i=0;i<n;i++)
    {
         printf("%d\n",b[i]);
    }

}
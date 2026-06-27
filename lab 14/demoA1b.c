// print in reverse order
#include<stdio.h>
void main()
{
    int n;
    printf("enter size:");
    scanf("%d",&n);
    int num[n],i;
    for(i=0;i<n;i++)
    {
        printf("enter number:");
        scanf("%d",&num[i]);
    
    }
    for(i=n-1;i>=0;i--)
    {
    printf("%d",num[i]);
    }
    printf("\n");
}
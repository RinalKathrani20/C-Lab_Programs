#include<stdio.h>
void main()
{
    int n;
    printf("enter size:");
    scanf("%d",&n);
    int a[n],i,count=0,count1=0;

    for(i=0;i<n;i++)
    {
        printf("enter number:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            count=count+1;
        }
        else
        {
            count1=count1+1;
        }
    }
        printf("even count=%d\n",count);
        printf("odd count=%d",count1);
}
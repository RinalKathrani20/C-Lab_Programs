#include<stdio.h>
void main()
{
    int n;
    printf("enter size:");
    scanf("%d",&n);
    int num[n],i,count=0,count1=0;

    for(i=0;i<n;i++)
    {
        printf("enter number:");
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        if(num[i]>=0)
        {
            count=count+1;
        }
        else{
            count1=count1+1;
        }

    }
        printf("pc=%d",count);
        printf("\nnc=%d",count1);
}
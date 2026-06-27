//search element in array
#include<stdio.h>
void main()
{
    int n,i,count=0,s;
    printf("enter size:");
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++)
    {
        printf("enter elements:");
        scanf("%d",&a[i]);
    }
    printf("enter s:");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(s==a[i])
        {
        printf("element %d is found at index %d\n",s,i);
        count=1;
        break;
        }
    }
        if(count==0)
        {
            printf("element not found in array\n");
        }
    }

//Count total number of negative elements in array.
#include<stdio.h>
void main()
{
    int n,i,count=0;
    printf("enter size:");
    scanf("%d,&n");
    int a[n];
    
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            count=count+1;
        }
    }
    printf("%d",count);
}

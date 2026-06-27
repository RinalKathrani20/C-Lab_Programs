#include<stdio.h>
void main()
{
    int i=1,sum=0,n;
    printf("enter n:");
    scanf("%d",&n);

    while(i<=n)
    {

        if(i%2==0)
        {
            sum=sum-i;
        }
        else
        {
            sum=sum+i;
        }
        i=i+1;
    }
     printf("sum=%d",sum);
}
#include<stdio.h>
void main()
{
    int i,n;
    int sum=0;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i*i<=n;i++)
    {
        sum=sum+(i*i);
    }
    printf("Sum=%d",sum);
}
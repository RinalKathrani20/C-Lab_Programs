#include<stdio.h>
void main()
{
    int n,i,fact=1;//n=4- 4*3*2*1
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
}
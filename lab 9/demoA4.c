#include<stdio.h>
int main()
{
    int n,i=1,fact=1;
    printf("enter a number:");  //n=4 4*3*2*1=24
    scanf("%d",&n);

    while(i<=n)
    {
        fact=fact*i;
        i=i+1;
    }
    printf("factorial=%d",fact);
}
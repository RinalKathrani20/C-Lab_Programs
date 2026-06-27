#include<stdio.h>

int power(int x,int n)
{
    if(n==0)
        return 1;

    return x*power(x,n-1);
}

int main()
{
    int x,n;

    printf("Enter base: ");
    scanf("%d",&x);

    printf("Enter power: ");
    scanf("%d",&n);

    printf("Power = %d",power(x,n));

    return 0;
}
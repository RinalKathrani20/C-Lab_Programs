#include<stdio.h>
void main()
{
    int n,div;
    printf("enter number:");
    scanf("%d",&n);

    if(n!=0)
    {
        div=n>>1;
        printf("%d",div);
    }
    else
    {
        printf("number is zero");
    }
}
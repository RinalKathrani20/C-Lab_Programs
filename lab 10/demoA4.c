#include<stdio.h>
void main()
{
    int a,rem;
    printf("enter a number:");
    scanf("%d",&a);
    while(a!=0)
    {
        rem=a%10;
        printf("%d\n",rem);
        a=a/10;
    }
}
    
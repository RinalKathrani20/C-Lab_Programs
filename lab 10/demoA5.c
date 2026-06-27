#include<stdio.h>
void main()
{
    int a,rem=0,rev=0;
    printf("enter a:");//564-- reverse=465
    scanf("%d",&a);
    while(a!=0)
    {
        rem=a%10;//4,6,5
        rev=rev*10+rem;//46
        a=a/10;//465,46,4
    }
    printf("rev=%d",rev);
}
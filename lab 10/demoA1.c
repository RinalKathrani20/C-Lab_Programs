#include<stdio.h>
void main()
{
    int a,d1,d2;
    printf("enter a number:");//a=123
    scanf("%d",&a);
    d2=a%10;//3
    d1=a;

    while(d1>=10)
    {
        d1=d1/10;
    }
    printf("sum of first and last digit is %d",d1+d2);
}
//Find out sum of first and last digit of a given number.
#include<stdio.h>
void main()
{
    int n,rem,rem1;
    printf("enter n:");
    scanf("%d",&n);
    rem=n%10;
    n=n/10;
    while(n!=0)
    {
        rem1=n%10;
        n=n/10;
    }
    printf("sum=%d",rem+rem1);
}
#include<stdio.h>

int main()
{
    int a,b,temp;
    int quotient=0,remainder;

    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    if(a<b)
    {
        temp=a;
        a=b;
        b=temp;
    }

    remainder=a;

    while(remainder>=b)
    {
        remainder=remainder-b;
        quotient++;
    }

    printf("Quotient = %d\n",quotient);
    printf("Remainder = %d",remainder);

    return 0;
}
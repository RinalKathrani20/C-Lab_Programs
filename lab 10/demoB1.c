#include<stdio.h>//6=1+2+3
void main()
{
    int a,i=1,sum=0;
    printf("enter a number:");
    scanf("%d",&a);

    while(i<a)
    {
        if(a%i==0)
        {
            sum=sum+i;
        }
        i++;
    }
        if(sum==a)
        {
            printf("perfect number");
        }
        else
        {
            printf("not perfect number");
        }
 }


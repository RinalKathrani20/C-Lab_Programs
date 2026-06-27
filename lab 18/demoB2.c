#include<stdio.h>

int prime(int n)
{
    int i;

    if(n<=1)
        return 0;

    for(i=2;i<n;i++)
    {
        if(n%i==0)
            return 0;
    }

    return 1;
}

int armstrong(int n)
{
    int temp=n, rem, count=0, sum=0, power, i;

    while(temp!=0)
    {
        count++;
        temp=temp/10;
    }

    temp=n;

    while(temp!=0)
    {
        rem=temp%10;

        power=1;

        for(i=1;i<=count;i++)
            power=power*rem;

        sum=sum+power;

        temp=temp/10;
    }

    return (sum==n);
}

int perfect(int n)
{
    int i,sum=0;

    for(i=1;i<n;i++)
    {
        if(n%i==0)
            sum=sum+i;
    }

    return (sum==n);
}

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d",&n);

    if(prime(n))
        printf("Prime Number\n");
    else
        printf("Not Prime\n");

    if(armstrong(n))
        printf("Armstrong Number\n");
    else
        printf("Not Armstrong\n");

    if(perfect(n))
        printf("Perfect Number\n");
    else
        printf("Not Perfect\n");

    return 0;
}
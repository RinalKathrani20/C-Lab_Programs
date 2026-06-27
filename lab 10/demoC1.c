#include<stdio.h>
void main()
{
    int n,i;
    int rem,count=0,sum=0,temp,pow;
    printf("Enter a number:");
    scanf("%d",&n);

     temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        count++;
        temp=temp/10;
    }

     temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        pow=1;
        for(i=1;i<=count;i++)
        {
           pow=pow*rem;
        }
        sum=sum+pow;
        temp=temp/10;
    }
    if(sum==n)
    {
        printf("%d is a armstrong number",n);
    }
    else
    {
        printf("%d is not a armstrong number",n);
    }

}
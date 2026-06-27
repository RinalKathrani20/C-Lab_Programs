#include<stdio.h>
void main()
{
    int n,flag=0,i;
    printf("enter a number:");
    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("%d is a prime number",n);
    }
    else{
         printf("%d is not a prime number",n);
    }
    
}